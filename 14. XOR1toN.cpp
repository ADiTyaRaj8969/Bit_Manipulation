// Topic: XOR of all numbers from 1 to N (pattern-based)
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

int main()
{
    cout << "XOR 1..5: " << xor1toN(5) << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
