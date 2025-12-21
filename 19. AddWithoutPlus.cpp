// Topic: Add two numbers without using + or - (bitwise)
#include <bits/stdc++.h>
using namespace std;

int addWithoutPlus(int a, int b)
{
    while (b != 0)
    {
        int carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}

int main()
{
    cout << "15 + 27 = " << addWithoutPlus(15, 27) << '\n';
    return 0;
}

// Time Complexity: O(log M) where M is max(a,b)
// Space Complexity: O(1)
