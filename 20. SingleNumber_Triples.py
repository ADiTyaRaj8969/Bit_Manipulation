# Topic: Find the single number when every other appears 3 times

def single_number(nums):
    bits = [0]*32
    for x in nums:
        for i in range(32):
            if x & (1<<i): bits[i] += 1
    res = 0
    for i in range(32):
        if bits[i] % 3:
            res |= (1<<i)
    return res

if __name__ == '__main__':
    print('Single:', single_number([2,2,3,2]))

# Time Complexity: O(n * 32)
# Space Complexity: O(1)
