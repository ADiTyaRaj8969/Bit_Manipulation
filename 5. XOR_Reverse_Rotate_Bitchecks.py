# Topic: XOR 1..N, reverse bits, rotate bits, and a simple kth-bit-palindrome check

def xor_1_to_n(n):
    r = n % 4
    if r == 0: return n
    if r == 1: return 1
    if r == 2: return n+1
    return 0

def reverse_bits(n, bits=32):
    rev = 0
    for i in range(bits):
        rev = (rev << 1) | (n & 1)
        n >>= 1
    return rev

def rotate_left(n, d, bits=32):
    return ((n << d) & ((1<<bits)-1)) | (n >> (bits - d))

def rotate_right(n, d, bits=32):
    return (n >> d) | ((n << (bits - d)) & ((1<<bits)-1))

if __name__ == '__main__':
    print('XOR 1..5:', xor_1_to_n(5))
    x = 10
    print('Reverse(10):', reverse_bits(x,8))
    print('RotateLeft(10,2):', rotate_left(x,2,8))
    print('RotateRight(10,2):', rotate_right(x,2,8))

# Time Complexity: O(bits)
# Space Complexity: O(1)
