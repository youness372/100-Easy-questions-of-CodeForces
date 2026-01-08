n  = int (input())
if  n  % 2 != 0  :   
    print (-1)   
else :   
    cpt = 0 
    liste= [0] * (n+1)   
    for i in range (1,n+1) :    
        if i % 2 != 0 :
            liste[i] =  i  + 1        
        else :     
            liste[i] = i  - 1  
    for i in range (1 , len(liste)) :   
        if i == liste[liste[i]]  and liste[i]  != i  :   
            print (liste[i])
  
            
