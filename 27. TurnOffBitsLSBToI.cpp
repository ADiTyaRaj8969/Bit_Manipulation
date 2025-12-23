// Topic: Turn off bits from LSB to ith bit inclusive
#include <bits/stdc++.h>
using namespace std;

int turnOffLSBtoI(int n, int i)
{
    int mask = ~((1 << (i + 1)) - 1);
    return n & mask;
}

int main()
{
    cout << "Turn off LSB..1 of 13: " << turnOffLSBtoI(13, 1) << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
