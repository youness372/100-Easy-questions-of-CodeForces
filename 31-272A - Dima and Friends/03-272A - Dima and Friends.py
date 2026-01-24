n = int (input()) 
arr  =  list(map(int , input().split()))   
friend_num  =  sum(arr)  
cpt = 0  
for i in  range (1 , 6) :  
    if (i + friend_num) % (n+1)  !=  1:   
        cpt +=  1        
print(cpt)
