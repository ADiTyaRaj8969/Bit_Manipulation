# Topic: Check if a number is power of two

def is_power_of_two(n):
    return n > 0 and (n & (n-1)) == 0

if __name__ == '__main__':
    print('Is 16 power of two?', 'Yes' if is_power_of_two(16) else 'No')
    print('Is 18 power of two?', 'Yes' if is_power_of_two(18) else 'No')

# Time Complexity: O(1)
# Space Complexity: O(1)
