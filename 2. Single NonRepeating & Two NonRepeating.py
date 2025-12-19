# Topic: Find single non-repeating (others twice) and two non-repeating elements

def single_non_repeat(arr):
    xr = 0
    for x in arr: xr ^= x
    return xr

def two_non_repeat(arr):
    xr = 0
    for x in arr: xr ^= x
    setbit = xr & -xr
    a = 0; b = 0
    for x in arr:
        if x & setbit: a ^= x
        else: b ^= x
    return a, b

if __name__ == '__main__':
    a = [2,3,2,4,4]
    print('Single:', single_non_repeat(a))
    b = [2,4,7,9,2,4]
    print('Two non-repeat:', two_non_repeat(b))

# Time Complexity: O(n)
# Space Complexity: O(1)
