# Topic: Check if kth bit is palindrome in binary form (mirror check)

def is_kth_bit_palindrome(n, k):
    if n == 0: return False
    bits = n.bit_length()
    mirror = bits - 1 - k
    if k < 0 or k >= bits or mirror < 0 or mirror >= bits: return False
    return ((n >> k) & 1) == ((n >> mirror) & 1)

if __name__ == '__main__':
    print('k=1 mirror?', 'Yes' if is_kth_bit_palindrome(0b101001,1) else 'No')

# Time Complexity: O(1)
# Space Complexity: O(1)
