 
#   entre chr(65) ->   A  and  chr(90) -> Z   
#   entre chr(97) ->  a  and chr(122) -> z   
n  =  input().strip()    
lower  ,  upper  = 0 , 0  
for i in  n :   
    if ord(i) >= 65  and ord(i) <=  90 :     
        upper +=  1    
    else :   
        lower +=   1  
if  lower  >=  upper  :   
    n = n.lower()    
else :   
    n  = n.upper()   

print(n)
