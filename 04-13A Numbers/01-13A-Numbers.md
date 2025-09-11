# *13A - Numbers 🔬*  
[![Codeforces: Young Physicist](https://img.shields.io/badge/Codeforces-Young_Physicist_69A-blue)](https://codeforces.com/problemset/problem/13/A)

---   

##  *The Problem 🤔*

- Little Petya likes numbers a lot. He found that number 123 in base 16 consists of two digits: the first is 7 and the second is 11. So the sum of digits of 123 in base 16 is equal to 18.

- Now he wonders what is an average value of sum of digits of the number A written in all bases from 2 to A - 1.

- ***Note :*** that all computations should be done in base 10. You should find the result as an irreducible fraction, written in base 10.

- **Input ℹ️**
Input contains one integer number A (3 ≤ A ≤ 1000).
- **Output ⭕**
Output should contain required average value in format «X/Y», where X is the numerator and Y is the denominator.

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
<td>5</td>
<td>7/3</td>

</tr>   
</tr>
<tr>
<td>2</td>
<td>3</td>
<td>2/1</td>


</tr> 

</table>   
</center>   
</body>   
</html>       


---
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body style="font-family: Arial, sans-serif; line-height: 1.6; margin: 0; padding: 0; background-color: #f4f4f4; color: #333;">
    <header style="background-color: #333; color: #fff; text-align: center; padding: 1em 0; border-bottom: 5px solid #555;">
        <h1>Code Explanation: Step-by-Step Example ⛓️‍💥 </h1>
    </header>

  <main style="max-width: 800px; margin: 20px auto; padding: 20px; background-color: #fff; box-shadow: 0 0 15px rgba(0, 0, 0, 0.2); border-radius: 8px;">
        <section class="explanation-section">
            <h2 style="color: #444; border-bottom: 2px solid #555; padding-bottom: 10px; margin-top: 0;"></h2>
            <p>This program calculates a fraction based on a single integer input, let's call it <code>A</code>. The result is a fraction <code>X/Y</code>. Let's walk through a concrete example with <code>A = 5</code> to understand how the program works.</p>
            
   <div class="step" style="margin-bottom: 25px; border-left: 4px solid #333; padding-left: 15px; background-color: #f9f9f9; padding: 15px; border-radius: 5px;">
                <h3 style="margin-top: 0; color: #355B9D; border-bottom: 1px dashed #ccc; padding-bottom: 5px;">Step 1: Calculate the Denominator (Y)</h3>
                <p>The denominator <code>Y</code> is very simple to find. It is always calculated as <code>A - 2</code>.</p>
                <p>In our example, with <code>A = 5</code>:</p>
                <p class="highlight" style="font-weight: bold; color: #007bff;">Y = 5 - 2 = 3</p>
            </div>

  <div class="step" style="margin-bottom: 25px; border-left: 4px solid #333; padding-left: 15px; background-color: #f9f9f9; padding: 15px; border-radius: 5px;">
                <h3 style="margin-top: 0; color: #555; border-bottom: 1px dashed #ccc; padding-bottom: 5px;">Step 2: Calculate the Numerator (X)</h3>
                <p>The numerator <code>X</code> is the sum of the digits of <code>A</code> when represented in different number bases. The program iterates through all bases from <code>2</code> up to <code>A-1</code>.</p>
                
  <h4>Calculation for A = 5:</h4>
                <ul style="list-style-type: disc; padding-left: 20px;">
                    <li><strong style="font-weight: bold;">Base 2:</strong> 5 in base 2 is <code>101</code>. The sum of digits is <code>1 + 0 + 1 = 2</code>.</li>
                    <li><strong style="font-weight: bold;">Base 3:</strong> 5 in base 3 is <code>12</code>. The sum of digits is <code>1 + 2 = 3</code>.</li>
                    <li><strong style="font-weight: bold;">Base 4:</strong> 5 in base 4 is <code>11</code>. The sum of digits is <code>1 + 1 = 2</code>.</li>
                </ul>
                <p>The numerator <code>X</code> is the sum of these results:</p>
                <p class="highlight" style="font-weight: bold; color: #007bff;">X = 2 + 3 + 2 = 7</p>
            </div>

   <div class="step" style="margin-bottom: 25px; border-left: 4px solid #333; padding-left: 15px; background-color: #f9f9f9; padding: 15px; border-radius: 5px;">
                <h3 style="margin-top: 0; color: #555; border-bottom: 1px dashed #ccc; padding-bottom: 5px;">Step 3: Simplify the Fraction</h3>
                <p>The final step is to simplify the fraction <code>X/Y</code> to its lowest terms using the Greatest Common Divisor (GCD).</p>
                <p>In our example, we have the fraction <code>7/3</code>. We find the GCD of 7 and 3, which is 1.</p>
                <p>Since the GCD is 1, the fraction <code>7/3</code> is already in its simplest form.</p>
                <p>The program will then print the final result:</p>
                <p class="highlight" style="font-weight: bold; color: #007bff;">7/3</p>
            </div>
        </section>
    </main>
</body>
</html>


##  *Code Implementation 💻*   

###   *C++  Implemenation ©️*   

```cpp
#include <cstdio>
 
int GCD(int m, int n)
{
    int r = m % n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}
 
int main()
{
    int A;
    scanf("%d", &A);
 
    int X(0), Y(A-2);
    for (int base = 2; base < A; ++base)
    {
        int n(A), ds(0);
        while (n != 0)
        {
            ds += n % base;
            n /= base;
        }
        X += ds;
    }
 
    int gcd = GCD(X, Y);
    X /= gcd;
    Y /= gcd;
    printf("%d/%d\n", X, Y);
    return 0;
}
```

###   *Java  Implemenation 🐦‍🔥*     

```java
import java.util.Scanner;

public class Main {

    public static int GCD(int m, int n) {
        int r = m % n;
        while (r != 0) {
            m = n;
            n = r;
            r = m % n;
        }
        return n;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        scanner.close();

        int X = 0;
        int Y = A - 2;

        for (int base = 2; base < A; ++base) {
            int n = A;
            int ds = 0;
            while (n != 0) {
                ds += n % base;
                n /= base;
            }
            X += ds;
        }

        int gcd = GCD(X, Y);
        X /= gcd;
        Y /= gcd;

        System.out.println(X + "/" + Y);
    }
}

```

###   *Python  Implemenation 🐍*   
```py
 
def gcd(m, n):
    r = m % n
    while r != 0:
        m = n
        n = r
        r = m % n
    return n

def main():
    A = int(input())

    X = 0
    Y = A - 2

    for base in range(2, A):
        n = A
        ds = 0
        while n != 0:
            ds += n % base
            n //= base
        X += ds

    common_divisor = gcd(X, Y)
    X //= common_divisor
    Y //= common_divisor

    print(f"{X}/{Y}")

if __name__ == "__main__":
    main() 

```
#### *See you Soon*   

<img width="1920" height="1080" alt="I hope you Enjoy" src="https://github.com/user-attachments/assets/add97fc6-d19c-4f39-915a-eed6196402c1" />
