// Topic: Check if two integers have opposite signs and parity of bits
#include <bits/stdc++.h>
using namespace std;

bool oppositeSigns(int x, int y)
{
    return (x ^ y) < 0;
}
int parity(int x)
{
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 1;
}

int main()
{
    cout << "Opposite (4,-5)? " << (oppositeSigns(4, -5) ? "Yes" : "No") << '\n';
    cout << "Parity(7): " << parity(7) << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
