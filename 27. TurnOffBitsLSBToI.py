# Topic: Turn off bits from LSB to ith bit inclusive

def turn_off_lsb_to_i(n, i):
    mask = ~((1 << (i+1)) - 1)
    return n & mask

if __name__ == '__main__':
    print('Turn off LSB..1 of 13:', turn_off_lsb_to_i(13,1))

# Time Complexity: O(1)
# Space Complexity: O(1)
