import math
arr = []
for i in range(5):
    row = list(map(int, input().split()))
    arr.append(row)

ans = 0

for i in range(5):
    for j in range(5):
        if arr[i][j] == 1:
            ans = abs(2 - i) + abs(2 - j)

print(ans)
