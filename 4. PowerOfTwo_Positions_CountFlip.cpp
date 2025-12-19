// Topic: Find position of only set bit, check power of two, count bits to flip A->B
#include <bits/stdc++.h>
using namespace std;

int findPositionIfPowerOfTwo(int n)
{
    if (n <= 0)
        return -1;
    if ((n & (n - 1)) != 0)
        return -1;
    int pos = 0;
    while (n > 1)
    {
        n >>= 1;
        pos++;
    }
    return pos;  // 0-based
}

int countBitsToFlip(int a, int b)
{
    int xr = a ^ b;
    int cnt = 0;
    while (xr)
    {
        xr &= (xr - 1);
        cnt++;
    }
    return cnt;
}

int main()
{
    cout << "Position (2^3): " << findPositionIfPowerOfTwo(8) << '\n';
    cout << "Is power of two (6): " << ((6 & (6 - 1)) == 0 ? "Yes" : "No") << '\n';
    cout << "Bits to flip (10,13): " << countBitsToFlip(10, 13) << '\n';
    return 0;
}

// Time Complexity: O(number of set bits)
// Space Complexity: O(1)
