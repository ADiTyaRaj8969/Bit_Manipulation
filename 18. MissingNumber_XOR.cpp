// Topic: Find missing number in array containing 1..N using XOR
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr, int n)
{
    int xr = 0;
    for (int i = 1; i <= n; ++i) xr ^= i;
    for (int x : arr) xr ^= x;
    return xr;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 6};
    cout << "Missing: " << missingNumber(arr, 6) << '\n';
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
