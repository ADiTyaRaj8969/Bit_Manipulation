// Topic: Find position of the only set bit (1-based). Returns -1 if not a power of two
#include <bits/stdc++.h>
using namespace std;

int positionOfOnlySetBit(unsigned int n)
{
    if (n == 0 || (n & (n - 1)) != 0)
        return -1;  // not power of two
    int pos = 1;
    while (n > 1)
    {
        n >>= 1;
        pos++;
    }
    return pos;
}

int main()
{
    cout << "Position (only set bit) of 16: " << positionOfOnlySetBit(16) << '\n';
    cout << "Position (only set bit) of 18: " << positionOfOnlySetBit(18) << '\n';
    return 0;
}

// Time Complexity: O(log n)
// Space Complexity: O(1)
