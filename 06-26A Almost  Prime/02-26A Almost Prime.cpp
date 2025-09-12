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
