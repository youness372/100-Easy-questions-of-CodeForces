import java.util.Scanner;

public class BeautifulYear {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        
        int n = 1000000000; // 10^9
        
        for (int i = m + 1; i < n; i++) {
            int copie = i;
            int a = copie % 10;
            copie /= 10;
            int c = copie % 10;
            copie /= 10;
            int d = copie % 10;
            copie /= 10;
            int e = copie % 10;
            
            if (a != c && c != d && d != a && e != a && c != e && d != e) {
                System.out.println(i);
                break;
            }
        }
        
        scanner.close();
    }
}
