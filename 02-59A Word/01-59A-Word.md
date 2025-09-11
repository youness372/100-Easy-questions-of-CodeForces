
# *59A - Word ©️*  
[![Codeforces: Young Physicist](https://img.shields.io/badge/Codeforces-Young_Physicist_69A-blue)](https://codeforces.com/problemset/problem/59/A)

---   

##  *The Problem 🤔*

- Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

- **Input**
The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

- **Output**
Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

<html>
<body>
<center>
<table>
<tr>
<th  width ="200" >ID</th>
<th  width ="200" >Input</th>
<th  width ="200" >Output</th>

</tr>
<tr>
<td>1</td>
<td>HoUse</td>
<td>house</td>

</tr>   
</tr>
<tr>
<td>2</td>
<td>ViP</td>
<td>VIP</td>

</tr> 
</tr>
<tr>
<td>3</td>
<td>maTRIx</td>
<td>matrix</td>

</tr> 

</table>   
</center>   
</body>   
</html>       


##  *Explaination ⛓️‍💥*    

-  we gonna  Count  the Number of Lower  case in  S
-  count The Number of Upper case  in  S
-  if ***`Lower >=  Upper`*** we gonna  ***`S =  S.Upper()`***
-  else ***`Upper > Lower`*** So we gonna  ***`S =  S.Lower() `***


##  *Code Implementation 💻*   

###   *C++  Implemenation ©️*   

```cpp
#include<iostream>
using namespace  std ;
int main ()  { 
string  s ;
cin  >>  s ;
int  lower  = 0 ,  upper = 0  ;  
for (char c : s)  {
    if ( c >= 'A'  &&  c <=  'Z')  {
        upper++;  
    }
  else {
      lower++;  
  }
}
if (lowe >=  upper)  {
  for (char &c : s) c = tolower(c);
}else {
   for (char &c : s)  c = toupper(c) ;   
}

cout << s << endl  ;
return  0  ;
}
```

###   *Java  Implemenation 🐦‍🔥*     

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();

        int lower = 0, upper = 0;

        for (char c : n.toCharArray()) {
            if (c >= 'A' && c <= 'Z') {
                upper++;
            } else {
                lower++;
            }
        }

        if (lower >= upper) {
            n = n.toLowerCase();
        } else {
            n = n.toUpperCase();
        }

        System.out.println(n);
    }
}

```

###   *Python  Implemenation 🐍*   
```py
 
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

```
#### *See you Soon*   

<img width="1920" height="1080" alt="I hope you Enjoy" src="https://github.com/user-attachments/assets/add97fc6-d19c-4f39-915a-eed6196402c1" />

