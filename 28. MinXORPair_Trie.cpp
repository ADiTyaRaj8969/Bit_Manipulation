// Topic: Minimum XOR of two numbers in an array using a binary trie (32-bit)
#include <bits/stdc++.h>
using namespace std;

struct TrieNode
{
    TrieNode* child[2];
    TrieNode() { child[0] = child[1] = nullptr; }
};

void insertTrie(TrieNode* root, int num)
{
    TrieNode* p = root;
    for (int i = 31; i >= 0; --i)
    {
        int b = (num >> i) & 1;
        if (!p->child[b])
            p->child[b] = new TrieNode();
        p = p->child[b];
    }
}

int queryMinXor(TrieNode* root, int num)
{
    TrieNode* p = root;
    int val = 0;
    for (int i = 31; i >= 0; --i)
    {
        int b = (num >> i) & 1;
        if (p->child[b])
            p = p->child[b];
        else
        {
            p = p->child[1 - b];
            val |= (1 << i);
        }
    }
    return val;
}

int minXorPair(vector<int>& arr)
{
    if (arr.size() < 2)
        return 0;
    TrieNode* root = new TrieNode();
    insertTrie(root, arr[0]);
    int ans = INT_MAX;
    for (int i = 1; i < arr.size(); ++i)
    {
        ans = min(ans, queryMinXor(root, arr[i]));
        insertTrie(root, arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> a = {0, 2, 5, 7};
    cout << "Min XOR (trie): " << minXorPair(a) << '\n';
    return 0;
}

// Time Complexity: O(n * 32)
// Space Complexity: O(n * 32)
