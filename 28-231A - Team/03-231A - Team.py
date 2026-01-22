n =  int (input())  
liste  =  []     
cpt = 0 
for i in  range (n) :   
    arr = list(map(int, input().split()))   
    if sum(arr) >= 2 :   
        cpt +=  1    
print (cpt)
