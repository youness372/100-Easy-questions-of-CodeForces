s =  input ()     
cpt = 0   
liste = []   
for i in  s :   
  if i not in  liste :   
     liste.append(i)   
     cpt+=  1    
if cpt % 2 == 0  :   
  print ("CHAT WITH HER!")     
else :   
  print ("IGNORE HIM!")
