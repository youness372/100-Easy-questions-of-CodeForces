s1 =  input ()   
s2 = input()   
s1  =  s1.lower()   
s2 =  s2.lower()   
cpt = 0   
for i in  range  (len(s1)) :   
    if  ord (s1[i]) >  ord (s2[i])  :   
        cpt =  1  
        break   
    elif  ord  (s2[i])  >  ord (s1[i])  :   
        cpt =  -1   
        break   
print (cpt)  
