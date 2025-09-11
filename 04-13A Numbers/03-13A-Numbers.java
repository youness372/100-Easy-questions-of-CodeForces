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
