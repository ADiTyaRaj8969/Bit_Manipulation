// Topic: Missing number via XOR, add two numbers without +, find single when others appear 3 times
#include <bits/stdc++.h>
using namespace std;

int missingNumberXOR(vector<int>& arr, int n)
{
    int xr = 0;
    for (int i = 1; i <= n; ++i) xr ^= i;
    for (int x : arr) xr ^= x;
    return xr;
}

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

int singleNumberTriple(const vector<int>& nums)
{
    vector<int> bits(32, 0);
    for (int x : nums)
        for (int i = 0; i < 32; ++i)
            if (x & (1 << i))
                bits[i]++;
    int res = 0;
    for (int i = 0; i < 32; ++i)
        if (bits[i] % 3)
            res |= (1 << i);
    return res;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 3, 2, 1, 3, 5};  // missing 6
    cout << "Missing: " << missingNumberXOR(arr, 6) << '\n';
    cout << "Add without + (15+27): " << addWithoutPlus(15, 27) << '\n';
    vector<int> t = {2, 2, 3, 2};
    cout << "Single when others thrice: " << singleNumberTriple(t) << '\n';
    return 0;
}

// Time Complexity: O(n * 32) for triple trick
// Space Complexity: O(1)
