# Topic: Reverse bits of an integer for given bit-length

def reverse_bits_n(n, bits=32):
    rev = 0
    for _ in range(bits):
        rev = (rev << 1) | (n & 1)
        n >>= 1
    return rev

if __name__ == '__main__':
    print('Reverse 10 in 8 bits:', reverse_bits_n(10,8))

# Time Complexity: O(bits)
# Space Complexity: O(1)
