// Topic: Generate subsets using bitmasking, count subsets with given sum, unique subsets of string
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateSubsets(const vector<int>& arr)
{
    int n = arr.size();
    vector<vector<int>> res;
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        vector<int> cur;
        for (int i = 0; i < n; ++i)
            if (mask & (1 << i))
                cur.push_back(arr[i]);
        res.push_back(cur);
    }
    return res;
}

int countSubsetsWithSum(const vector<int>& arr, int target)
{
    int n = arr.size();
    int cnt = 0;
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        int s = 0;
        for (int i = 0; i < n; ++i)
            if (mask & (1 << i))
                s += arr[i];
        if (s == target)
            cnt++;
    }
    return cnt;
}

vector<string> uniqueSubsetsOfString(const string& s)
{
    int n = s.size();
    set<string> seen;
    vector<string> res;
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        string cur;
        for (int i = 0; i < n; ++i)
            if (mask & (1 << i))
                cur.push_back(s[i]);
        if (seen.insert(cur).second)
            res.push_back(cur);
    }
    return res;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    auto subs = generateSubsets(arr);
    cout << "Subsets count: " << subs.size() << '\n';
    cout << "Count sum=3: " << countSubsetsWithSum(arr, 3) << '\n';
    auto u = uniqueSubsetsOfString("aba");
    cout << "Unique subsets of 'aba': " << u.size() << '\n';
    return 0;
}

// Time Complexity: O(2^n * n)
// Space Complexity: O(2^n * n)
