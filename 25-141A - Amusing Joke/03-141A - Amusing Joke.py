s1 = input()
s2 = input()
s3 = input()
combined = s1 + s2

if sorted(combined) == sorted(s3):
    print("YES")
else:
    print("NO")
