# *Lucky Numbers - C++ Solution* 
## *Problem Description* 
This program determines if a given number is a "Super Lucky Number". A Super Lucky Number is defined as a number where:

- The number contains only digits 4 and 7
- The total count of these digits (4s and 7s) is also either 4 or 7

## *Algorithm Overview ✒️*
The solution uses digit extraction and counting to process each digit of the input number, then validates if the count meets the lucky criteria.   

## *Code Implementation 💻*      
```cpp
#include<iostream>   
using namespace std ;   
 
int main()  {      
 
long long n  ;   
int x ;   
int cpt = 0  ;   
cin >> n  ;   
 
while (n)  {   
 
   x = n % 10  ;     
   if (x == 7 ||  x == 4 )   {
   cpt++;  
   }   
   
   n = n / 10 ; 
}
  
 if (cpt == 7  || cpt  == 4)   {   
    cout << "YES" << endl  ; 
 }   
 else {   
  cout << "NO" << endl  ;  
 }
 
return  0 ;  
}
```

## *Step-by-Step Algorithm Explanation 🪜*

### Step 1️⃣ : Digit Processing Loop  
```cpp
cppwhile (n) {
    x = n % 10 ;             
    if (x == 7 || x == 4 ) {  
        cpt++;               
    }
    n = n / 10 ;            
}
```
#### Loop Operations:

- ***`n % 10`***: Extracts the last digit using modulo
- ***`n / 10`***: Removes the last digit using integer division
- ***`cpt++`***: Counts only digits 4 and 7

### Step 2️⃣ : Final Validation
```cpp
cppif (cpt == 7 || cpt == 4) {
    cout << "YES" << endl ;
}
else {
    cout << "NO" << endl ;
}
```

- Checks if count equals exactly 4 or 7
- Outputs result accordingly


### Examples
### *Example  1️⃣ : Valid Super Lucky Number*
Input: ***`4774`***  
<div align="center">

| ***`Iteration`*** | ***`n`*** | ***`x = n % 10`*** | ***`Lucky Digit?`*** | ***`cpt`*** | ***`n = n/10`***|
|:--:|:-----:|:------:|:------------|:-----:|:------:|
| 1  | 4774  | 4   | ✓ Yes| 1  | 4774   |
| 2  | 477  | 7   | ✓ Yes | 2  | 47   | 
| 3  | 47 | 7   | ✓ Yes | 3  | 4  | 
| 4  | 4  | 4   | ✓ Yes | 4  | 0   | 

</div>   

### Result: cpt = 4 → Output: YES
#### *Example 2️⃣ : Invalid - Wrong Count*
#### Input: `47` 
<div align="center">

| ***`Iteration`*** | ***`n`*** | ***`x = n % 10`*** | ***`Lucky Digit?`*** | ***`cpt`*** | ***`n = n/10`***|
|:--:|:-----:|:------:|:------------|:-----:|:------:|
| 1  | 47  | 7   | ✓ Yes| 1  | 4   |
| 2  | 4  | 4   | ✓ Yes | 2  | 0  |    

</div>   

### Result: cpt = 2 ≠ 4 and ≠ 7 → Output: NO

#### *Example 3️⃣ : Mixed Digits* 
#### Input: ` 4753`    
<div align="center">

| ***`Iteration`*** | ***`n`*** | ***`x = n % 10`*** | ***`Lucky Digit?`*** | ***`cpt`*** | ***`n = n/10`***|
|:--:|:-----:|:------:|:------------|:-----:|:------:|
| 1  | 4753  | 4   | ✗ No| 0  | 475 |
| 2  | 475  | 5   |✗ No | 0  | 47   | 
| 3  | 47 | 7   | ✓ Yes | 1  | 7 | 
| 4  | 4  | 4   | ✓ Yes | 2  | 0   | 

</div>    

### Result: cpt = 2 ≠ 4 and ≠ 7 → Output: NO

## *Algorithm Analysis* 
### *Time Complexity ⏳*  

- **`O(log n)`**  where n is the input number
- Loop runs once for each digit in the number

### *Space Complexity 🌌*   

- **`O(1)`** - uses constant extra space
- Only three variables: ` n` , ` x` , cpt


###  *Key Programming Concepts* 

#### 1- Digit Extraction
- n % 10 gets rightmost digit
- n / 10 removes rightmost digit
#### 2- Loop Control
- while(n) continues until n becomes 0
#### 3- Conditional Logic
- || operator for checking multiple conditions
- if-else for decision making
#### 4- Data Types
- long long for handling large numbers (up to 9 × 10¹⁸)

## Input/Output Format
### Input

- Single integer n (1 ≤ n ≤ 10¹⁸)

### Output

- "YES" if the number is a Super Lucky Number
- "NO" otherwise

## *Test Cases 🧪*
<div align="center">

| Input | Expected Output | Explanation |
|:--:|:-----:|:------:|
| **`4774`**  | YES  | 4 lucky digits (count = 4) | 
| **`47`**  | NO  | 2 lucky digits (count ≠ 4,7)  |
| **`4444777`** | YES  | 7 lucky digits (count = 7)   |   
| **`777444`** | NO |6 lucky digits (count ≠ 4,7)  | 
| **`4753`** |NO | 2 lucky digits, has non-lucky digits | 
| **`123`** |NO  | 0 lucky digits | 

</div>

### Algorithm Workflow   


```cpp
START
  ↓
Read input number n
  ↓
Initialize counter cpt = 0
  ↓
While n > 0:
  ├── Extract digit: x = n % 10
  ├── If x == 4 OR x == 7:
  │     └── Increment cpt
  └── Remove digit: n = n / 10
  ↓
If cpt == 4 OR cpt == 7:
  ├── Print "YES"
  └── Print "NO"
  ↓
END
```

## *Code Implementation*   

### *Java Implementation*  
```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        int count = 0;
        
        while (n > 0) {
            int digit = (int) (n % 10);
            if (digit == 4 || digit == 7) {
                count++;
            }
            n /= 10;
        }
        
  
        if (count == 4 || count == 7) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        
        scanner.close();
    }
}

```

### *Python Implementation*  

```py
n = int(input())
count = 0

while n > 0:
    digit = n % 10
    if digit == 4 or digit == 7:
        count += 1
    n //= 10

if count == 4 or count == 7:
    print("YES")
else:
    print("NO")
```
<img width="1800" height="1080" alt="I hope you Enjoy" src="https://github.com/user-attachments/assets/9fe6a148-6221-4ced-bebc-a08fcdf2855f" />

