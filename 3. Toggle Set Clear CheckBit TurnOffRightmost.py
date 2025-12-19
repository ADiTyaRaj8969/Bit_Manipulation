# Topic: Toggle, Set, Clear, Check bit operations and turn off rightmost set bit

def toggle_bit(n, i):
    return n ^ (1 << i)

def set_bit(n, i):
    return n | (1 << i)

def clear_bit(n, i):
    return n & (~(1 << i))

def is_ith_set(n, i):
    return (n & (1 << i)) != 0

def turn_off_rightmost(n):
    return n & (n - 1)

if __name__ == '__main__':
    n = 13
    print('Toggle bit 1:', toggle_bit(n,1))
    print('Set bit 1:', set_bit(n,1))
    print('Clear bit 2:', clear_bit(n,2))
    print('Is bit 2 set?', 'Yes' if is_ith_set(n,2) else 'No')
    print('Turn off rightmost set bit:', turn_off_rightmost(n))

# Time Complexity: O(1)
# Space Complexity: O(1)
