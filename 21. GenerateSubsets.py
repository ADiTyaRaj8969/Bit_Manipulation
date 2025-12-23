# Topic: Generate all subsets using bitmasking (dedicated)

def subsets(arr):
    n = len(arr); res = []
    for mask in range(1<<n):
        cur = [arr[i] for i in range(n) if mask & (1<<i)]
        res.append(cur)
    return res

if __name__ == '__main__':
    print('Generated', len(subsets([1,2,3])), 'subsets')

# Time Complexity: O(2^n * n)
# Space Complexity: O(2^n * n)
