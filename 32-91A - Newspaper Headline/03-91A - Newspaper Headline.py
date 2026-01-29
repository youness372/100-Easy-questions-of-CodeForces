import bisect

def solve():
    s1 = input().strip()
    s2 = input().strip()

    pos = {}
    for i, char in enumerate(s1):
        if char not in pos:
            pos[char] = []
        pos[char].append(i)

    for char in s2:
        if char not in pos:
            print("-1")
            return

    newspapers_count = 1
    current_index = -1 

    for char in s2:
        indices = pos[char]
        idx_in_list = bisect.bisect_right(indices, current_index)
        
        if idx_in_list < len(indices):
            current_index = indices[idx_in_list]
        else:
            newspapers_count += 1
            current_index = indices[0]

    print(newspapers_count)

solve()
