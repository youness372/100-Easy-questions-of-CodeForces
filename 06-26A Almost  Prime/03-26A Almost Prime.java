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
