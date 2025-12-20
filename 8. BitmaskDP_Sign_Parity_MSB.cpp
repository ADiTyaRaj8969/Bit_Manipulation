// Topic: Simple bitmask DP, sign check, parity, highest power of 2 <= N, base-2 log via MSB
#include <bits/stdc++.h>
using namespace std;

bool oppositeSigns(int x, int y)
{
    return (x ^ y) < 0;
}

int parity(int x)
{  // parity of set bits (0 even, 1 odd)
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 1;
}

int highestPowerOf2LE(int n)
{
    if (n < 1)
        return 0;
    int p = 1;
    while (p <= n) p <<= 1;
    return p >> 1;
}

int msbPos(int n)
{
    if (n <= 0)
        return -1;
    return 31 - __builtin_clz(n);
}

int main()
{
    cout << "Opposite signs (4,-5): " << (oppositeSigns(4, -5) ? "Yes" : "No") << '\n';
    cout << "Parity(7): " << parity(7) << '\n';
    cout << "Highest pow2 <= 20: " << highestPowerOf2LE(20) << '\n';
    cout << "MSB pos (16): " << msbPos(16) << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
