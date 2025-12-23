# Topic: Find all unique subsets of a string using bits

def unique_subsets(s):
    n = len(s); seen = set(); res = []
    for mask in range(1<<n):
        cur = ''.join(s[i] for i in range(n) if mask & (1<<i))
        if cur not in seen:
            seen.add(cur); res.append(cur)
    return res

if __name__ == '__main__':
    print('Unique subsets count:', len(unique_subsets('aba')))

# Time Complexity: O(2^n * n)
# Space Complexity: O(2^n * n)
