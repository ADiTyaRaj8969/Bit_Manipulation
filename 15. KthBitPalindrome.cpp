// Topic: Check if kth bit is palindrome in binary form (mirror check)
#include <bits/stdc++.h>
using namespace std;

bool isKthBitPalindrome(unsigned int n, int k)
{
    if (n == 0)
        return false;
    int bits = 32 - __builtin_clz(n);
    int mirror = bits - 1 - k;
    if (k < 0 || k >= bits || mirror < 0 || mirror >= bits)
        return false;
    return ((n >> k) & 1) == ((n >> mirror) & 1);
}

int main()
{
    unsigned int n = 0b101001;
    cout << "k=1 mirror? " << (isKthBitPalindrome(n, 1) ? "Yes" : "No") << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
