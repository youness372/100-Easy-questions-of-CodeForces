def primeumber(n):
    if n == 0 or n == 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True
n, m = map(int, input().split())
ver = -1
for i in range(n + 1, m + 1):
    if primeumber(i):
        ver = i
        break
if ver == m:
    print("YES")
else:
    print("NO")
