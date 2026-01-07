import  math
def S(n):
    cpt = 0     
    while n  != 0:     
        cpt +=  n  %  10     
        n = n // 10   
    return cpt
S(110) 
cpt2 = 0    
n =  int(input())          
sqrt_  = math.sqrt (n)      
start = max (1 , int(sqrt_ - 162))   
end = int(sqrt_)     
for x in range (start , end+1) :        
    target1 =  S(x)  
    result  = (x * x) + target1 * x    
    if result  ==  n :     
        print (x)      
        cpt2 += 1   
        break      
if cpt2  == 0  :
    print(-1) 
