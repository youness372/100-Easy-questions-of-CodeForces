# *271A - Beautiful Year*  
[![Codeforces: Young Physicist](https://img.shields.io/badge/Codeforces-Young_Physicist_69A-blue)](https://codeforces.com/problemset/problem/271/A)

---

##  *The Problem 🧩*   
 - It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

 - Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

- **Input**
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

- **Output**
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.


## *Test Cases 🧪*  

<div align="center">

| ID | Input | Output | Explanation |
|:--:|:-----:|:------:|:------------|
| 1  | 1987  | 2013   | Next year with distinct digits after 1987 |
| 2  | 2013  | 2014   | Next year with distinct digits after 2013 |
| 3  | 1000  | 1023   | Next year with distinct digits after 1000 |

</div>

---

## *Python Implementation 💻*   
```python
m = int(input().strip())
n = 10**9

for i in range(m + 1, n):
    copie = i
    a = copie % 10      
    copie //= 10
    c = copie % 10    
    copie //= 10
    d = copie % 10  
    copie //= 10
    e = copie % 10   
    if a != c and c != d and d != a and e != a and c != e and d != e:
        print(i)
        break      
```

## *Algorithm Breakdown ⚔️*   

### *Step 1️⃣: Input Processing*   

```py 
pythonm = int(input().strip())
```

### *Step 2️⃣: Digit Extraction*   
```py []
pythoncopie = i
a = copie % 10      # Extract units digit
copie //= 10
c = copie % 10      # Extract tens digit
copie //= 10
d = copie % 10      # Extract hundreds digit
copie //= 10
e = copie % 10      # Extract thousands digit
```

### *Step3️⃣: Distinctness Check*   

```py []
python# All pairwise comparisons to ensure no repeated digits
if a != c and c != d and d != a and e != a and c != e and d != e:
```

## *Complexity Analysis ⏳*   
<div align="center">

| **Metric** | **Complexity** | **Description** |
|:-----:|:------:|:------------|
| **Time**  | **$$O(N)$$**  | Next year with distinct digits after 1987 |
| **Space**  | **$$O(1)$$**  | Next year with distinct digits after 2013 |
| **Average**  | **$$O(1)$$**   | Next year with distinct digits after 1000 |  
| **Best Case**  | **$$O(1)$$**   | Next year with distinct digits after 1000 |   

</div> 


### *Examples with Steps*   

#### *Example 1: Finding 2013 from 1987*   
```
Input:  1987
Start:  1988 → digits: 1,9,8,8 ❌ (repeated 8)
Try:    1989 → digits: 1,9,8,9 ❌ (repeated 9)
 
Found:  2013 → digits: 2,0,1,3 ✅ (all distinct)
Output: 2013
```

#### *Example 2: Immediate Success*   
```  
Input:  2013
Start:  2014 → digits: 2,0,1,4 ✅ (all distinct)
Output: 2014
```

##  *Code Implementation 💻*   

###   *C++  Implemenation ©️*   

```cpp
#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    
    int n = 1000000000; // 10^9
    
    for (int i = m + 1; i < n; i++) {
        int copie = i;
        int a = copie % 10;
        copie /= 10;
        int c = copie % 10;
        copie /= 10;
        int d = copie % 10;
        copie /= 10;
        int e = copie % 10;
        
        if (a != c && c != d && d != a && e != a && c != e && d != e) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
```

###   *Java  Implemenation 🐦‍🔥*     

```java
import java.util.Scanner;

public class BeautifulYear {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        
        int n = 1000000000; // 10^9
        
        for (int i = m + 1; i < n; i++) {
            int copie = i;
            int a = copie % 10;
            copie /= 10;
            int c = copie % 10;
            copie /= 10;
            int d = copie % 10;
            copie /= 10;
            int e = copie % 10;
            
            if (a != c && c != d && d != a && e != a && c != e && d != e) {
                System.out.println(i);
                break;
            }
        }
        
        scanner.close();
    }
}
```

###   *Python  Implemenation 🐍*   
```py
m = int(input().strip())
n = 10**9

for i in range(m + 1, n):
    copie = i
    a = copie % 10      
    copie //= 10
    c = copie % 10    
    copie //= 10
    d = copie % 10  
    copie //= 10
    e = copie % 10   
    if a != c and c != d and d != a and e != a and c != e and d != e:
        print(i)
        break        
```
#### *See you Soon*   

<img width="1920" height="1080" alt="I hope you Enjoy" src="https://github.com/user-attachments/assets/add97fc6-d19c-4f39-915a-eed6196402c1" />
