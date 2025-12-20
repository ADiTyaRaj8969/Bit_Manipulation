// Topic: XOR 1..N, reverse bits, rotate bits, and a simple kth-bit-palindrome check
#include <bits/stdc++.h>
using namespace std;

int xor1toN(int n)
{
    int r = n % 4;
    if (r == 0)
        return n;
    if (r == 1)
        return 1;
    if (r == 2)
        return n + 1;
    return 0;
}

unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
    for (int i = 0; i < 32; ++i)
    {
        rev <<= 1;
        rev |= (n & 1);
        n >>= 1;
    }
    return rev;
}

unsigned int rotateLeft(unsigned int n, int d)
{
    return (n << d) | (n >> (32 - d));
}

unsigned int rotateRight(unsigned int n, int d)
{
    return (n >> d) | (n << (32 - d));
}

int main()
{
    cout << "XOR 1..5: " << xor1toN(5) << '\n';
    unsigned int x = 0b00000000000000000000000000001010;
    cout << "Reverse(10): " << reverseBits(x) << '\n';
    cout << "RotateLeft(10,2): " << rotateLeft(x, 2) << '\n';
    cout << "RotateRight(10,2): " << rotateRight(x, 2) << '\n';
    return 0;
}

// Time Complexity: O(32) per bit op
// Space Complexity: O(1)
