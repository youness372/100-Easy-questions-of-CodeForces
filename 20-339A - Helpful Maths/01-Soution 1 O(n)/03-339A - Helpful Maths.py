s = input ()  
result = ""   
liste = []    
s_set = sorted (list (set(s))) 
if len(s) == 1 : 
    if s == "1"  :  liste.append(1)   
    elif s == "2" : liste.append(1)  
    else :  liste.append(1)  
 
for i in  range (1,len(s_set))  :   
    cpt =  s.count(s_set[i])   
    liste.append(cpt)     
if len(liste) == 3 : 
    for i in  range (liste[0]) :   
        result += "1" + "+"   
    for i in  range (liste[1]) :   
        result += "2+"   
    for i in  range (liste[2]) :
        if i != liste[2] - 1  :   
            result += "3+"   
        else :   
            result += "3"   
if len (liste) ==  2 and s_set[1] == "1"   and s_set[2] == "2":   
    for i in  range (liste[0]) :   
        result += "1" + "+"    
    for i in  range (liste[1]) :   
        if i != liste[1] - 1 :      
            result += "2+"  
        else :    
            result += "2"        
if len (liste) ==  2 and s_set[1] == "1"   and s_set[2] == "3":   
    for i in  range (liste[0]) :   
        result += "1" + "+"    
    for i in  range (liste[1]) :   
        if i != liste[1] - 1 :      
            result += "3+"  
        else :    
            result += "3"     
if len (liste) ==  2 and s_set[1] == "2"   and s_set[2] == "3":   
    for i in  range (liste[0]) :   
        result += "2" + "+"    
    for i in  range (liste[1]) :   
        if i != liste[1] - 1 :      
            result += "3+"  
        else :    
            result += "3"        
       
if  len(liste) == 1  and s_set[0] == "1" :   
    for i in  range   (liste[0]) :   
        if i !=  liste[0] - 1 :  
            result += "1+"   
        else :   
            result +=  "1"     
elif len (liste) ==  1  and s_set[0] ==  "2"  :  
    for i in  range   (liste[0]) :   
        if i !=  liste[0] - 1 :  
            result += "2+"   
        else :   
            result +=  "2"     
elif len(liste) == 1 and s_set[0] == "3" :   
    for i in  range   (liste[0]) :   
        if i !=  liste[0] - 1 :  
            result += "3+"   
        else :   
            result +=  "3"
if  len(liste) == 1  and   len(s_set) == 2  :     
    if  s_set[1] == "1" : 
        for i in  range   (liste[0]) :   
            if i !=  liste[0] - 1 :  
                result += "1+"   
            else :   
                result +=  "1"  
    elif s_set[1] ==  "2" :    
        for i in  range   (liste[0]) :   
            if i !=  liste[0] - 1 :  
                result += "2+"   
            else :   
                result +=  "2"    
    elif s_set[1] == "3"  : 
        for i in  range   (liste[0]) :   
            if i !=  liste[0] - 1 :  
                result += "3+"   
            else :   
                result +=  "3"
 
print (result)
