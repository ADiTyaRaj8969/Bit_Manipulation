# Topic: Check if two integers have opposite signs and parity of bits

def opposite_signs(x, y):
    return (x ^ y) < 0

def parity(x):
    x ^= x >> 16
    x ^= x >> 8
    x ^= x >> 4
    x ^= x >> 2
    x ^= x >> 1
    return x & 1

if __name__ == '__main__':
    print('Opposite (4,-5)?', 'Yes' if opposite_signs(4,-5) else 'No')
    print('Parity(7):', parity(7))

# Time Complexity: O(1)
# Space Complexity: O(1)
