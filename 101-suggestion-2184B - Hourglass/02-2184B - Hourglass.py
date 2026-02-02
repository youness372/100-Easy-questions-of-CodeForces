for _ in range(int(input())):
    a,b,c=map(int,input().split())
    print(max(0,(a if (c//b)%2==0 else min(a,b))-c%b))
