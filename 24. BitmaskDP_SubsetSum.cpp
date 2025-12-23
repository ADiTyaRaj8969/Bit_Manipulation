// Topic: Simple bitmask-based DP for subset sum using bitset (efficient for small sums)
#include <bits/stdc++.h>
using namespace std;

bool subsetSumBitset(const vector<int>& arr, int target)
{
    bitset<10001> bs;
    bs[0] = 1;
    for (int x : arr) bs |= (bs << x);
    return bs[target];
}

int main()
{
    vector<int> a = {3, 34, 4, 12, 5, 2};
    cout << "Subset sum 9 exists: " << (subsetSumBitset(a, 9) ? "Yes" : "No") << '\n';
    return 0;
}

// Time Complexity: O(n * target / wordsize)
// Space Complexity: O(target)
