# Topic: Bitmask DP example — count number of ways to choose subset meeting condition (small n)

def count_ways_mask(arr, target):
    n = len(arr); cnt = 0
    for mask in range(1<<n):
        s = sum(arr[i] for i in range(n) if mask & (1<<i))
        if s == target: cnt += 1
    return cnt

if __name__ == '__main__':
    print('Ways sum=3:', count_ways_mask([1,2,3],3))

# Time Complexity: O(2^n * n)
# Space Complexity: O(1)
