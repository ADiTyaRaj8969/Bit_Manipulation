# Topic: Count subsets with given sum using bitmasking

def count_subsets_with_sum(arr, target):
    n = len(arr); cnt = 0
    for mask in range(1<<n):
        s = sum(arr[i] for i in range(n) if mask & (1<<i))
        if s == target: cnt += 1
    return cnt

if __name__ == '__main__':
    print('Count sum=3:', count_subsets_with_sum([1,2,3],3))

# Time Complexity: O(2^n * n)
# Space Complexity: O(1)
