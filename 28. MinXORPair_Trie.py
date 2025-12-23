# Topic: Minimum XOR of two numbers in an array using sort-based or trie-like approach

# For simplicity and readability, we implement the sort-based O(n log n) method here.

def min_xor_pair(arr):
    arr = sorted(arr)
    res = float('inf')
    for i in range(1, len(arr)):
        res = min(res, arr[i] ^ arr[i-1])
    return res

if __name__ == '__main__':
    print('Min XOR pair:', min_xor_pair([0,2,5,7]))

# Time Complexity: O(n log n)
# Space Complexity: O(1)
