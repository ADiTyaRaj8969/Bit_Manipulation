// Topic: Count subsets with given sum using bitmasking
#include <bits/stdc++.h>
using namespace std;

int countSubsetsWithSum(const vector<int>& arr, int target)
{
    int n = arr.size(), cnt = 0;
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

int main()
{
    vector<int> a = {1, 2, 3};
    cout << "Count sum=3: " << countSubsetsWithSum(a, 3) << '\n';
    return 0;
}

// Time Complexity: O(2^n * n)
// Space Complexity: O(1)
