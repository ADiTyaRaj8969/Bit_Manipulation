# Topic: Misc bit checks: check kth bit palindrome in binary (interpreted as check equality mirrored), wrapper utils

def is_kth_bit_palindrome(n, k, bits=None):
    if n == 0: return False
    if bits is None: bits = n.bit_length()
    mirror = bits - 1 - k
    if k < 0 or mirror < 0 or k >= bits or mirror >= bits: return False
    return ((n >> k) & 1) == ((n >> mirror) & 1)

if __name__ == '__main__':
    n = 0b101001
    print('Is kth bit palindrome (k=1):', 'Yes' if is_kth_bit_palindrome(n,1) else 'No')

# Time Complexity: O(1)
# Space Complexity: O(1)
