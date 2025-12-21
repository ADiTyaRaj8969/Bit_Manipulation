// Topic: Rotate bits left and right by k positions for given bit-width
#include <bits/stdc++.h>
using namespace std;

unsigned int rotateLeftN(unsigned int n, int d, int bits)
{
    d %= bits;
    return ((n << d) & ((1u << bits) - 1)) | (n >> (bits - d));
}

unsigned int rotateRightN(unsigned int n, int d, int bits)
{
    d %= bits;
    return (n >> d) | ((n << (bits - d)) & ((1u << bits) - 1));
}

int main()
{
    unsigned int x = 10;
    cout << "RotateLeft 10 by2 (8bits): " << rotateLeftN(x, 2, 8) << '\n';
    cout << "RotateRight 10 by2 (8bits): " << rotateRightN(x, 2, 8) << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
