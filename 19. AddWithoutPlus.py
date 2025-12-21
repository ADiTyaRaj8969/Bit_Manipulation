# Topic: Add two numbers without using + or - (bitwise)

def add_without_plus(a, b):
    mask = 0xFFFFFFFF
    while b != 0:
        carry = (a & b) << 1
        a = (a ^ b) & mask
        b = carry & mask
    return a if a <= 0x7FFFFFFF else ~(a ^ mask)

if __name__ == '__main__':
    print('15 + 27 =', add_without_plus(15,27))

# Time Complexity: O(log M)
# Space Complexity: O(1)
