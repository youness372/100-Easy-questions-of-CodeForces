k =  int (input())   
I  =  int (input())      
m =  int (input())      
n =  int (input())   
d =   int (input())        
cpt = 0 
for i in range   (1 , d+1) :   
    if  i  %  k  == 0  or   i % I == 0  or i % m == 0  or i % n == 0  :   
        cpt +=  1    
print(cpt) 
