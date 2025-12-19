// Topic: Find single non-repeating (others twice) and two non-repeating elements
#include <bits/stdc++.h>
using namespace std;

int singleNonRepeat(const vector<int>& arr)
{
    int xr = 0;
    for (int x : arr) xr ^= x;
    return xr;
}

pair<int, int> twoNonRepeat(const vector<int>& arr)
{
    int xr = 0;
    for (int x : arr) xr ^= x;
    int setbit = xr & -xr;  // rightmost set bit
    int a = 0, b = 0;
    for (int x : arr)
    {
        if (x & setbit)
            a ^= x;
        else
            b ^= x;
    }
    return {a, b};
}

int main()
{
    vector<int> a = {2, 3, 2, 4, 4};
    cout << "Single: " << singleNonRepeat(a) << '\n';
    vector<int> b = {2, 4, 7, 9, 2, 4};
    auto p = twoNonRepeat(b);
    cout << "Two non-repeat: " << p.first << " " << p.second << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
