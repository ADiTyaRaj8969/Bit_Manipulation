# Topic: Find position of only set bit, check power of two, count bits to flip A->B

def find_position_if_power_of_two(n):
    if n <= 0: return -1
    if n & (n-1): return -1
    pos = 0
    while n > 1:
        n >>= 1
        pos += 1
    return pos

def count_bits_to_flip(a, b):
    xr = a ^ b
    cnt = 0
    while xr:
        xr &= xr - 1
        cnt += 1
    return cnt

if __name__ == '__main__':
    print('Position (2^3):', find_position_if_power_of_two(8))
    print('Is power of two (6):', 'Yes' if (6 & (6-1))==0 else 'No')
    print('Bits to flip (10,13):', count_bits_to_flip(10,13))

# Time Complexity: O(number of set bits)
# Space Complexity: O(1)
