# Topic: Generate subsets using bitmasking, count subsets with given sum, unique subsets of string

from itertools import combinations

def generate_subsets(arr):
    n = len(arr)
    res = []
    for mask in range(1<<n):
        cur = [arr[i] for i in range(n) if mask & (1<<i)]
        res.append(cur)
    return res

def count_subsets_with_sum(arr, target):
    n = len(arr)
    cnt = 0
    for mask in range(1<<n):
        s = 0
        for i in range(n):
            if mask & (1<<i): s += arr[i]
        if s == target: cnt += 1
    return cnt

def unique_subsets_of_string(s):
    n = len(s)
    seen = set()
    res = []
    for mask in range(1<<n):
        cur = ''.join(s[i] for i in range(n) if mask & (1<<i))
        if cur not in seen:
            seen.add(cur)
            res.append(cur)
    return res

if __name__ == '__main__':
    arr = [1,2,3]
    print('Subsets count:', len(generate_subsets(arr)))
    print('Count sum=3:', count_subsets_with_sum(arr,3))
    print('Unique subsets of "aba":', len(unique_subsets_of_string('aba')))

# Time Complexity: O(2^n * n)
# Space Complexity: O(2^n * n)
