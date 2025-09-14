# 236A -  Beautiful Matrix

[![Codeforces: Almost Prime](https://img.shields.io/badge/Codeforces-Almost_Prime_236A-blue)](https://codeforces.com/problemset/problem/236/A)
[![Language](https://img.shields.io/badge/Language-C++-blue.svg)](https://isocpp.org/)
[![Difficulty](https://img.shields.io/badge/Difficulty-900-orange.svg)](https://codeforces.com/problemset/problem/236/A)

---

## *The Problem 🤔*

- You've got a `5 × 5` matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

- Swap two neighboring matrix **`rows`**, that is, rows with indexes **`i`** and **`i + 1`** for some integer **`i (1 ≤ i < 5)`**.
- Swap two neighboring matrix **`columns`**, that is, columns with indexes **`j`** and **`j + 1`** for some integer **`j (1 ≤ j < 5)`**.


- You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

### *Input 📥*
The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

### *Output 📤*

Print a single integer — the minimum number of moves needed to make the matrix beautiful.

0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0


---

## *Test Cases 🧪*  

<div align="center">

| Input | Output | 
|:-----:|:------:|
| `0 0 0 0 0`<br>`0 0 0 0 1`<br>`0 0 0 0 0`<br>`0 0 0 0 0`<br>`0 0 0 0 0` | 3 | 
| `0 0 0 0 0`<br>`0 0 0 0 0`<br>`0 1 0 0 0`<br>`0 0 0 0 0`<br>`0 0 0 0 0` | 1 | 

</div>

---
##  *Algorithm Overview*    

The solution uses Manhattan distance to calculate the minimum moves needed to reach the center position from any given position in the grid.

### Code Explanation
###  Step-by-Step Breakdown
### Headers and Namespace   


```cpp
#include<iostream>
using namespace std;   
```
- Includes the iostream library for input/output operations
- Uses the standard namespace to avoid writing **`std::`** prefix


###  Grid Declaration and Input   
```cpp
int arr[5][5];
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        cin >> arr[i][j];
    }
}
```
- Declares a `5×5` integer array to represent the `grid`
- Uses nested loops to read 25 integers from input
- i represents `rows` `(0-4)`, j represents `columns` `(0-4)`

### Find Target Element and Calculate Distance   
```cpp
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        if (arr[i][j] == 1) {
            ans = abs(2-i) + abs(2-j);
        }
    }
}
```
- Searches through the entire grid to find the element with value 1
- When found, calculates the Manhattan distance to the center position `(2, 2)`
- Manhattan Distance Formula: **`|x2-x1| + |y2-y1|`**

  - **`abs(2-i)`**: Vertical distance from current row to center `row` (2)
  - **`abs(2-j)`**: Horizontal distance from current column to center `column` (2).
 
###  6. Output Result

```cpp
cout << ans << endl;
return 0;
```

- Prints the minimum number of moves required
- Returns 0 to indicate successful program execution

#### *Input Format*   

- 25 integers representing a `5×5` grid
- Exactly one element should have the value 1
- All other elements can be any integer values

#### *Output Format* 

Single integer representing the minimum moves to center the element marked as 1

### Example      
#### *Input 📥*  
```cpp
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
```

#### *Process: 🐦‍🔥🔬*

- Element 1 is found at position (3, 4)
- Center position is (2, 2)
- **`Distance = |2-3| + |2-4| = 1 + 2 = 3`**  
#### *Output 📤*   

```cpp
3
```

### *Time Complexity ⏳*  

- **$$O(n²)$$** where n = 5, so effectively **`O(25)`** or **`O(1)`** for constant grid size
The algorithm scans through all 25 positions once

### *Space Complexity 🥏*

- **$$O(n²)$$** where n = 5, so O(25) or **`O(1)`** for storing the 5×5 grid

### *Key Concepts Used 🗝️* 

- **`2D Arrays`**: For grid representation
- **`Manhattan`** Distance: For calculating minimum moves
- **`Nested Loops`**: For grid traversal
- **`Absolute Value`**: For distance calculation

###  *Assumptions*

- The grid is always 5×5
- Exactly one element has the value 1
- Movement is allowed in 4 directions (up, down, left, right)
- Each move covers exactly one unit distance

# *Code Implementation 💻*   
## *C++ Implementation *
```cpp
#include<iostream>    
using namespace  std ;   
int main ()  {      
   
    int arr[5][5]  ;   
    for (int  i = 0; i < 5; i++) 
    {   
        for (int  j = 0; j < 5; j++)
        {
            cin  >>  arr[i][j]  ;   
        }
    }  
 
    int ans = 0  ;   
    for (int  i = 0; i < 5 ; i++)
    {
       for (int j  = 0  ;  j < 5  ;  j++) 
       {
        if (arr[i][j] == 1 )
        {
           ans =  abs(2-i)  +  abs (2-j) ;     
        }
        
       }
       
    }   
 
    cout  <<  ans  << endl  ;   
    
    
 
    return  0  ;   
}
```
## *Java Implementation 💻*
```java
import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] arr = new int[5][5];
        
   
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                arr[i][j] = scanner.nextInt();
            }
        }
        
        int ans = 0;
        

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (arr[i][j] == 1) {
                    ans = Math.abs(2 - i) + Math.abs(2 - j);
                }
            }
        }
        
        System.out.println(ans);
        
        scanner.close();
    }
}

```
## *Python Implementation 💻*
```python
import math
arr = []
for i in range(5):
    row = list(map(int, input().split()))
    arr.append(row)

ans = 0

for i in range(5):
    for j in range(5):
        if arr[i][j] == 1:
            ans = abs(2 - i) + abs(2 - j)

print(ans)

```

### *Author 🗣️*  

[![GitHub followers](https://img.shields.io/github/followers/YOUR_GITHUB?style=social)](https://github.com/youness372)

### *The Problem*  
[![Codeforces: Young Physicist](https://img.shields.io/badge/Codeforces-Young_Physicist_263A-blue)](https://codeforces.com/problemset/problem/26/A)


### Happy coding! 🎉   

<img width="1920" height="1080" alt="I hope you Enjoy" src="https://github.com/user-attachments/assets/e1047756-af85-47a2-a4d2-93f7e0c53f2a" />
