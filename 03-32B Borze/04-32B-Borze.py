s =   input().strip()   
n =  len(s)   
i  = 0
res =  ""
 
while i  <  n  :   
    if   s[i] ==  "." :    
        res +=  "0"   
        i +=  1    
    elif   s[i] == "-"  and  s[i+1]  ==  "."  and i+1 <=  n  :   
        res +=  "1"   
        i +=  2    
    else   :   
        res += "2"   
        i +=  2    
print   (res)  
