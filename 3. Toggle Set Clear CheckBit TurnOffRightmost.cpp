// Topic: Toggle, Set, Clear, Check bit operations and turn off rightmost set bit
#include <bits/stdc++.h>
using namespace std;

int toggleBit(int n, int i)
{
    return n ^ (1 << i);
}
int setBit(int n, int i)
{
    return n | (1 << i);
}
int clearBit(int n, int i)
{
    return n & (~(1 << i));
}
bool isIthSet(int n, int i)
{
    return (n & (1 << i)) != 0;
}
int turnOffRightmost(int n)
{
    return n & (n - 1);
}

int main()
{
    int n = 13;  // 1101
    cout << "Toggle bit 1: " << toggleBit(n, 1) << '\n';
    cout << "Set bit 1: " << setBit(n, 1) << '\n';
    cout << "Clear bit 2: " << clearBit(n, 2) << '\n';
    cout << "Is bit 2 set? " << (isIthSet(n, 2) ? "Yes" : "No") << '\n';
    cout << "Turn off rightmost set bit: " << turnOffRightmost(n) << '\n';
    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
