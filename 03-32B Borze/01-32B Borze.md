# *32B - Borze 🔬*  
[![Codeforces: Young Physicist](https://img.shields.io/badge/Codeforces-Young_Physicist_69A-blue)](https://codeforces.com/problemset/problem/32/B)

---   

##  *The Problem 🤔*

Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

- **Input**
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).
- **Output**
Output the decoded ternary number. It can have leading zeroes.

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
<td>.-.--</td>
<td>012</td>

</tr>   
</tr>
<tr>
<td>2</td>
<td>--.</td>
<td>20</td>

</tr> 
</tr>
<tr>
<td>3</td>
<td>-..-.--</td>
<td>1012</td>  



</tr> 

</table>   
</center>   
</body>   
</html>       


##  *Explaination ⛓️‍💥*    

-  we Know : 
-  if ***`S[i] == '.' `*** That Mean  ***`0`***
-  else if  ***`S[i] == '-.'`*** That mean  ***`1 `***
-  else ***`S[i] == '--'`*** That mean  ***`2`***

<img width="1193" height="661" alt="image" src="https://github.com/user-attachments/assets/65087814-13c9-435b-b681-dc4cc99c1d64" />


##  *Code Implementation 💻*   

###   *C++  Implemenation ©️*   

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int n = s.length();
    int i = 0;
    std::string res = "";

    while (i < n) {
        if (s[i] == '.') {
            res += "0";
            i += 1;
        } else if (s[i] == '-' && i + 1 < n && s[i+1] == '.') {
            res += "1";
            i += 2;
        } else {
            res += "2";
            i += 2;
        }
    }
    std::cout << res << std::endl;
    return 0;
}
```

###   *Java  Implemenation 🐦‍🔥*     

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        int n = s.length();
        int i = 0;
        StringBuilder res = new StringBuilder();

        while (i < n) {
            if (s.charAt(i) == '.') {
                res.append("0");
                i += 1;
            } else if (i + 1 < n && s.charAt(i) == '-' && s.charAt(i+1) == '.') {
                res.append("1");
                i += 2;
            } else {
                res.append("2");
                i += 2;
            }
        }
        System.out.println(res.toString());
        scanner.close();
    }
}

```

###   *Python  Implemenation 🐍*   
```py
 
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

```
#### *See you Soon*   

<img width="1920" height="1080" alt="I hope you Enjoy" src="https://github.com/user-attachments/assets/add97fc6-d19c-4f39-915a-eed6196402c1" />
