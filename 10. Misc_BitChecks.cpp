// Topic: Misc bit checks: check kth bit palindrome in binary (interpreted as check equality
// mirrored), wrapper utils
#include <bits/stdc++.h>
using namespace std;

bool isKthBitPalindrome(unsigned int n, int k)
{
    // interpret as: check if bit k and bit (bits-1-k) are same in the current bit-length
    int bits = 32 - __builtin_clz(n);
    int mirror = bits - 1 - k;
    if (k < 0 || mirror < 0 || k >= bits || mirror >= bits)
        return false;
    return ((n >> k) & 1) == ((n >> mirror) & 1);
}

int main()
{
    unsigned int n = 0b101001;  // 41
    cout << "Is kth bit palindrome (k=1): " << (isKthBitPalindrome(n, 1) ? "Yes" : "No") << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
