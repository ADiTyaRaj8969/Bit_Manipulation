# Topic: Check even/odd using n&1, swap using XOR, count set bits

def is_odd(n):
    return (n & 1) == 1

def swap_xor(a, b):
    a = a ^ b
    b = a ^ b
    a = a ^ b
    return a, b

def count_set_bits(n):
    cnt = 0
    while n:
        n &= (n-1)
        cnt += 1
    return cnt

if __name__ == '__main__':
    n = 13
    print(n, 'is odd' if is_odd(n) else 'is even')
    a, b = 5, 9
    print('Before swap:', a, b)
    a, b = swap_xor(a,b)
    print('After swap:', a, b)
    print('Set bits in', n, ':', count_set_bits(n))

# Time Complexity: O(number of set bits)
# Space Complexity: O(1)
