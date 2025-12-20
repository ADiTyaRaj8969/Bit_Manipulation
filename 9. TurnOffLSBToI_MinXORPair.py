# Topic: Turn off bits from LSB to i, and minimum XOR of two numbers in array (sort based)

def turn_off_lsb_to_i(n, i):
    mask = ~((1 << (i+1)) - 1)
    return n & mask

def min_xor_pair(arr):
    arr = sorted(arr)
    res = float('inf')
    for i in range(1, len(arr)):
        res = min(res, arr[i] ^ arr[i-1])
    return res

if __name__ == '__main__':
    print('TurnOff 13 LSB->1:', turn_off_lsb_to_i(13,1))
    print('Min XOR pair:', min_xor_pair([0,2,5,7]))

# Time Complexity: O(n log n)
# Space Complexity: O(1)
