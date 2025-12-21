// Topic: Count bits to flip to convert A to B
#include <bits/stdc++.h>
using namespace std;

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
    cout << "Bits to flip (10->13): " << countBitsToFlip(10, 13) << '\n';
    return 0;
}

// Time Complexity: O(number of set bits)
// Space Complexity: O(1)
