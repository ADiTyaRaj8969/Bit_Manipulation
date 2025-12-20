# Topic: Simple bitmask DP, sign check, parity, highest power of 2 <= N, base-2 log via MSB

def opposite_signs(x, y):
    return (x ^ y) < 0

def parity(x):
    x ^= x >> 16
    x ^= x >> 8
    x ^= x >> 4
    x ^= x >> 2
    x ^= x >> 1
    return x & 1

def highest_power_of_2_le(n):
    if n < 1: return 0
    p = 1
    while p <= n: p <<= 1
    return p >> 1

def msb_pos(n):
    if n <= 0: return -1
    return n.bit_length() - 1

if __name__ == '__main__':
    print('Opposite signs (4,-5):', 'Yes' if opposite_signs(4,-5) else 'No')
    print('Parity(7):', parity(7))
    print('Highest pow2 <= 20:', highest_power_of_2_le(20))
    print('MSB pos (16):', msb_pos(16))

# Time Complexity: O(1)
# Space Complexity: O(1)
