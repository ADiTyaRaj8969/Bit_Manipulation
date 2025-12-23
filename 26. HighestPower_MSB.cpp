// Topic: Highest power of 2 <= N and base-2 log (position of MSB)
#include <bits/stdc++.h>
using namespace std;

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
    cout << "Highest pow2 <=20: " << highestPowerOf2LE(20) << '\n';
    cout << "MSB pos 16: " << msbPos(16) << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
