n =   int(input())   
cpt = 0  
for i in  range   (n) :  
    x =  input()   
    if x ==  "++X" or x ==  "X++" :  
        cpt +=  1    
    else :   
        cpt -=  1    
print(cpt)
