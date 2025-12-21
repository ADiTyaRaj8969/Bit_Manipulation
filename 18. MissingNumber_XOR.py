# Topic: Find missing number in array containing 1..N using XOR

def missing_number(arr, n):
    xr = 0
    for i in range(1, n+1): xr ^= i
    for x in arr: xr ^= x
    return xr

if __name__ == '__main__':
    arr = [1,2,4,5,6]
    print('Missing:', missing_number(arr,6))

# Time Complexity: O(n)
# Space Complexity: O(1)
