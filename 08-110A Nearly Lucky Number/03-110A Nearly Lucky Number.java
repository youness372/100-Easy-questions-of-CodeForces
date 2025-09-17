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
