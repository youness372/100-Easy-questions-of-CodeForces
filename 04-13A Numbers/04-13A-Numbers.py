 
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
