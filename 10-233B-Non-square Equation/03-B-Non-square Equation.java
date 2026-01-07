import java.util.Scanner;

public class Main {
    public static long S(long n) {
        long cpt = 0;
        while (n != 0) {
            cpt += n % 10;
            n /= 10;
        }
        return cpt;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();

        long sqrt_ = (long)Math.sqrt(n);
        long start = Math.max(1, sqrt_ - 162);
        long end = sqrt_;

        boolean found = false;
        for (long x = start; x <= end; x++) {
            if (x*x + S(x)*x == n) {
                System.out.println(x);
                found = true;
                break;
            }
        }

        if (!found)
            System.out.println(-1);
    }
}
