# Topic: Missing number via XOR, add two numbers without +, find single when others appear 3 times

def missing_number_xor(arr, n):
    xr = 0
    for i in range(1, n+1): xr ^= i
    for x in arr: xr ^= x
    return xr

def add_without_plus(a, b):
    mask = 0xFFFFFFFF
    while b != 0:
        carry = (a & b) << 1
        a = (a ^ b) & mask
        b = carry & mask
    # handle negative numbers for Python unlimited int
    return a if a <= 0x7FFFFFFF else ~(a ^ mask)

def single_number_triple(nums):
    bits = [0]*32
    for x in nums:
        for i in range(32):
            if x & (1<<i): bits[i] += 1
    res = 0
    for i in range(32):
        if bits[i] % 3:
            res |= (1<<i)
    return res

if __name__ == '__main__':
    arr = [1,2,4,5,3,2,1,3,5]
    print('Missing:', missing_number_xor(arr,6))
    print('Add without + (15+27):', add_without_plus(15,27))
    t = [2,2,3,2]
    print('Single when others thrice:', single_number_triple(t))

# Time Complexity: O(n * 32)
# Space Complexity: O(1)
