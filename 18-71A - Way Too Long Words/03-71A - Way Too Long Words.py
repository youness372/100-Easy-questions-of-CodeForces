def  waytolongword (s) :   
    n =  len (s)   
    if n > 10 :  
        return  s[0] + str (len(s)-2) + s[-1]   
    return s    
#waytolongword ("pneumonoultramicroscopicsilicovolcanoconiosis") 
n =  int (input())   
liste = ['0'] * n 
for i in  range (n) :   
    s =  input ()   
    liste[i] =  waytolongword(s) 
for i in liste :   
    print (i)
