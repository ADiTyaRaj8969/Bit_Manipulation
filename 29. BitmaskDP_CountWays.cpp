// Topic: Bitmask DP example — count number of ways to choose subset meeting condition (small n)
#include <bits/stdc++.h>
using namespace std;

int countWaysMask(const vector<int>& arr, int target)
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

int main()
{
    vector<int> a = {1, 2, 3};
    cout << "Ways sum=3: " << countWaysMask(a, 3) << '\n';
    return 0;
}

// Time Complexity: O(2^n * n)
// Space Complexity: O(1)
