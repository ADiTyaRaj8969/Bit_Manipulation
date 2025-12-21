# Topic: Count bits to flip to convert A to B

def count_bits_to_flip(a, b):
    xr = a ^ b
    cnt = 0
    while xr:
        xr &= xr - 1
        cnt += 1
    return cnt

if __name__ == '__main__':
    print('Bits to flip (10->13):', count_bits_to_flip(10,13))

# Time Complexity: O(number of set bits)
# Space Complexity: O(1)
