// Topic: Check if a number is power of two
#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

int main()
{
    cout << "Is 16 power of two? " << (isPowerOfTwo(16) ? "Yes" : "No") << '\n';
    cout << "Is 18 power of two? " << (isPowerOfTwo(18) ? "Yes" : "No") << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
