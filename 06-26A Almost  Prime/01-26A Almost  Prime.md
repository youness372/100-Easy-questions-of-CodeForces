# 26A - Almost Prime 🔢

[![Codeforces: Almost Prime](https://img.shields.io/badge/Codeforces-Almost_Prime_26A-blue)](https://codeforces.com/problemset/problem/26/A)
[![Language](https://img.shields.io/badge/Language-C++-blue.svg)](https://isocpp.org/)
[![Difficulty](https://img.shields.io/badge/Difficulty-900-orange.svg)](https://codeforces.com/problemset/problem/26/A)

---

## *The Problem 🤔*

A number is called **almost prime** if it has exactly two distinct prime factors.

For example:
- `6 = 2 × 3` has exactly 2 distinct prime factors (2 and 3) -----   ***acceptable***
- `18 = 2 × 3²` has exactly 2 distinct prime factors (2 and 3) -----  ***acceptable***
- `12 = 2² × 3` has exactly 2 distinct prime factors (2 and 3) ----- ***acceptable***
- `8 = 2³` has only 1 distinct prime factor (2)  ----- ***Not acceptable***
- `30 = 2 × 3 × 5` has 3 distinct prime factors (2, 3, and 5)  ----- ***Not acceptable***

**Task**: Given a positive integer `n`, find how many almost prime numbers exist in the range `[1, n]`.

### *Input 📥*
The first line contains a single integer `n` (1 ≤ n ≤ 3000).

### *Output 📤*
Print a single integer — the number of almost primes not exceeding `n`.

---

## *Test Cases 🧪*  

<div align="center">

| Input | Output | Almost Primes in Range |
|:-----:|:------:|:-----------------------|
| 10    | 2      | 6, 10 |
| 21    | 8      | 6, 10, 12, 14, 15, 18, 20, 21 |
| 1     | 0      | (none) |

</div>

---
## *C++ Implementation 💻*
```cpp
#include <iostream>
#include <cmath>

int count_distinct_prime_factors(int num) {
    int count = 0;

    if (num % 2 == 0) {
        count++;
        while (num % 2 == 0) {
            num /= 2;
        }
    }

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            count++;
            while (num % i == 0) {
                num /= i;
            }
        }
    }

    if (num > 2) {
        count++;
    }

    return count;
}

int count_almost_primes(int n) {
    int almost_primes_count = 0;
    
    for (int i = 1; i <= n; ++i) {
        if (count_distinct_prime_factors(i) == 2) {
            almost_primes_count++;
        }
    }
    
    return almost_primes_count;
}

int main() {
    int n;
    std::cin >> n;
    
    int result = count_almost_primes(n);
    std::cout << result << std::endl;
    
    return 0;
}

```
## *Java Implementation 💻*
```java
import java.util.Scanner;
import java.lang.Math;

public class AlmostPrimes {

    public static int countDistinctPrimeFactors(int num) {
        int count = 0;

        if (num % 2 == 0) {
            count++;
            while (num % 2 == 0) {
                num /= 2;
            }
        }

        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                count++;
                while (num % i == 0) {
                    num /= i;
                }
            }
        }

        if (num > 2) {
            count++;
        }

        return count;
    }


    public static int countAlmostPrimes(int n) {
        int almostPrimesCount = 0;
        
        for (int i = 1; i <= n; i++) {
            if (countDistinctPrimeFactors(i) == 2) {
                almostPrimesCount++;
            }
        }
        
        return almostPrimesCount;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        int result = countAlmostPrimes(n);
        System.out.println(result);
        
        scanner.close();
    }
}

```
## *Python Implementation 💻*
```python
def count_almost_primes(n):
    almost_primes_count = 0
    
    for i in range(1, n + 1):
        factors_count = count_distinct_prime_factors(i)
        if factors_count == 2:
            almost_primes_count += 1
    
    return almost_primes_count

def count_distinct_prime_factors(num):
    count = 0
    if num % 2 == 0:
        count += 1
        while num % 2 == 0:
            num //= 2
    
    i = 3
    while i * i <= num:
        if num % i == 0:
            count += 1
            while num % i == 0:
                num //= i
        i += 2
    
    if num > 2:
        count += 1
    
    return count

n = int(input())
result = count_almost_primes(n)
print(result)
```

## *Algorithm Breakdown ⚙️*  

### *Step  1️⃣ : Main Function Logic*    

```py
pythondef count_almost_primes(n):
    for i in range(1, n + 1):
        factors_count = count_distinct_prime_factors(i)
        if factors_count == 2:  
            almost_primes_count += 1
```
### *Step 2️⃣: Prime Factorization*   
```py
pythondef count_distinct_prime_factors(num):
    if num % 2 == 0:
        count += 1
        while num % 2 == 0:
            num //= 2
    i = 3
    while i * i <= num:
        if num % i == 0:
            count += 1
            while num % i == 0:
                num //= i
        i += 2
```

## *Complexity Analysis ⏳*   
<div align="center">

| **Metric** | **Complexity** | **Description** |
|:-----:|:------:|:------------|
| **Time**  | **$$O(n × √n)$$**  | For each number up to n, we factorize in **√n** time |
| **Space**  | **$$O(1)$$**  | Constant space usage |
| **Optimized**  | **$$O(n log log n)$$**   | Using Sieve of Eratosthenes (alternative) |  

</div>   


## *Key Insights 💡* 

  * **1** Efficient Factorization: We only check divisors up to √n
  * **2** Even/Odd Optimization: Handle factor 2 separately, then check odd numbers
  * **3** Count Distinct: We count each prime factor only once, regardless of its power
  * **4** Remaining Prime: If number > 2 after factorization, it's a prime factor


### *Author 🗣️*  

[![GitHub followers](https://img.shields.io/github/followers/YOUR_GITHUB?style=social)](https://github.com/youness372)

### *The Problem*  
[![Codeforces: Young Physicist](https://img.shields.io/badge/Codeforces-Young_Physicist_69A-blue)](https://codeforces.com/problemset/problem/26/A)


### Happy coding! 🎉   

<img width="1920" height="1080" alt="I hope you Enjoy" src="https://github.com/user-attachments/assets/e1047756-af85-47a2-a4d2-93f7e0c53f2a" />
