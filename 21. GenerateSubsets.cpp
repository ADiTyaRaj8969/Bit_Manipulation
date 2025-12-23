// Topic: Generate all subsets using bitmasking (dedicated)
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(const vector<int>& arr)
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

int main()
{
    vector<int> a = {1, 2, 3};
    auto s = subsets(a);
    cout << "Generated " << s.size() << " subsets\n";
    return 0;
}

// Time Complexity: O(2^n * n)
// Space Complexity: O(2^n * n)
