n =  int(input())
nums = list(map(int, input().split()))   
liste =   []  
for n in  nums : 
    cpt = 0   
    while  n != 0  :   
        res  =  n  % 2   
        if res == 1 :   
            cpt +=  1 
        n //=  2     
    liste.append(cpt)  
liste2_ = list(set(liste))
result = []
for i in range (len(liste2_)) :  
    result.append(liste.count(liste2_[i]))   
sum = 0 
for i in  result :  
    sum += (i * (i-1)) // 2    
print (sum)
