# Topic: Simple bitmask-based DP for subset sum using Python's integer bitmask

def subset_sum_bitmask(arr, target):
    bs = 1
    for x in arr:
        bs |= (bs << x)
    return (bs >> target) & 1 == 1

if __name__ == '__main__':
    print('Subset sum 9 exists:', subset_sum_bitmask([3,34,4,12,5,2],9))

# Time Complexity: O(n * target / wordsize)
# Space Complexity: O(target)
