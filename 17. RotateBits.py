# Topic: Rotate bits left and right by k positions for given bit-width

def rotate_left_n(n, d, bits=32):
    d %= bits
    return ((n << d) & ((1<<bits)-1)) | (n >> (bits - d))

def rotate_right_n(n, d, bits=32):
    d %= bits
    return (n >> d) | ((n << (bits - d)) & ((1<<bits)-1))

if __name__ == '__main__':
    print('RotateLeft 10 by2 (8bits):', rotate_left_n(10,2,8))
    print('RotateRight 10 by2 (8bits):', rotate_right_n(10,2,8))

# Time Complexity: O(1)
# Space Complexity: O(1)
