# Topic: Highest power of 2 <= N and base-2 log (position of MSB)

def highest_power_of_2_le(n):
    if n < 1: return 0
    p = 1
    while p <= n: p <<= 1
    return p >> 1

def msb_pos(n):
    if n <= 0: return -1
    return n.bit_length() - 1

if __name__ == '__main__':
    print('Highest pow2 <=20:', highest_power_of_2_le(20))
    print('MSB pos 16:', msb_pos(16))

# Time Complexity: O(1)
# Space Complexity: O(1)
