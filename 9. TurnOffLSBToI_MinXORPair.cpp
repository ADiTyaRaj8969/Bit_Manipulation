// Topic: Turn off bits from LSB to i, and minimum XOR of two numbers in array (sort based)
#include <bits/stdc++.h>
using namespace std;

int turnOffLSBtoI(int n, int i)
{  // turn off bits from LSB up to i (inclusive)
    int mask = ~((1 << (i + 1)) - 1);
    return n & mask;
}

int minXorPair(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    int res = INT_MAX;
    for (int i = 1; i < arr.size(); ++i) res = min(res, arr[i] ^ arr[i - 1]);
    return res;
}

int main()
{
    cout << "TurnOff 13 LSB->1: " << turnOffLSBtoI(13, 1) << '\n';
    vector<int> a = {0, 2, 5, 7};
    cout << "Min XOR pair: " << minXorPair(a) << '\n';
    return 0;
}

// Time Complexity: O(n log n) for minXor
// Space Complexity: O(1)
