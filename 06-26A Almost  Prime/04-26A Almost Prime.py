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
