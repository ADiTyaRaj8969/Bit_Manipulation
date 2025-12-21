# Topic: Find position of the only set bit (1-based). Returns -1 if not a power of two

def position_of_only_set_bit(n):
    if n == 0 or (n & (n-1)) != 0:
        return -1
    pos = 1
    while n > 1:
        n >>= 1
        pos += 1
    return pos

if __name__ == '__main__':
    print('Position of 16:', position_of_only_set_bit(16))
    print('Position of 18:', position_of_only_set_bit(18))

# Time Complexity: O(log n)
# Space Complexity: O(1)
