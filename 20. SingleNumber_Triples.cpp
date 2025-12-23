// Topic: Find the single number when every other appears 3 times
#include <bits/stdc++.h>
using namespace std;

int singleNumber(const vector<int>& nums)
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
    vector<int> nums = {2, 2, 3, 2};
    cout << "Single: " << singleNumber(nums) << '\n';
    return 0;
}

// Time Complexity: O(n * 32)
// Space Complexity: O(1)
