// Topic: Check even/odd using n&1, swap using XOR, count set bits
#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int cnt = 0;
    while (n)
    {
        n &= (n - 1);
        cnt++;
    }
    return cnt;
}

int main()
{
    int n = 13;  // 1101
    cout << n << ((n & 1) ? " is odd\n" : " is even\n");

    int a = 5, b = 9;  // swap using XOR
    cout << "Before swap: " << a << " " << b << '\n';
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swap: " << a << " " << b << '\n';

    cout << "Set bits in " << n << ": " << countSetBits(n) << '\n';
    return 0;
}

// Time Complexity: O(number of set bits)
// Space Complexity: O(1)
