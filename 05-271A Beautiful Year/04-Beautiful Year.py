m = int(input().strip())
n = 10**9

for i in range(m + 1, n):
    copie = i
    a = copie % 10      
    copie //= 10
    c = copie % 10    
    copie //= 10
    d = copie % 10  
    copie //= 10
    e = copie % 10   
    if a != c and c != d and d != a and e != a and c != e and d != e:
        print(i)
        break      
