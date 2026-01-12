s =  input ()   
result =  ""   
vowels  =  "AOYEUIaoyeui"    
for i in s :   
    if i not in  vowels :   
        result +=  "." + i.lower()   
print (result)
