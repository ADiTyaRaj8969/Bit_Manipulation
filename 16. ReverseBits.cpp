// Topic: Reverse bits of an integer for given bit-length
#include <bits/stdc++.h>
using namespace std;

unsigned int reverseBitsN(unsigned int n, int bits)
{
    unsigned int rev = 0;
    for (int i = 0; i < bits; ++i)
    {
        rev = (rev << 1) | (n & 1);
        n >>= 1;
    }
    return rev;
}

int main()
{
    cout << "Reverse 10 in 8 bits: " << reverseBitsN(10, 8) << '\n';
    return 0;
}

// Time Complexity: O(bits)
// Space Complexity: O(1)
