# Topic: XOR of all numbers from 1 to N (pattern-based)

def xor_1_to_n(n):
    r = n % 4
    if r == 0: return n
    if r == 1: return 1
    if r == 2: return n + 1
    return 0

if __name__ == '__main__':
    print('XOR 1..5:', xor_1_to_n(5))

# Time Complexity: O(1)
# Space Complexity: O(1)
