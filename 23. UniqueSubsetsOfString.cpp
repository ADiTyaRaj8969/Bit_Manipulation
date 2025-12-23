// Topic: Find all unique subsets of a string using bits
#include <bits/stdc++.h>
using namespace std;

vector<string> uniqueSubsets(const string& s)
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
    auto u = uniqueSubsets("aba");
    cout << "Unique subsets: " << u.size() << '\n';
    return 0;
}

// Time Complexity: O(2^n * n)
// Space Complexity: O(2^n * n)
