import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        int n = s.length();
        int i = 0;
        StringBuilder res = new StringBuilder();

        while (i < n) {
            if (s.charAt(i) == '.') {
                res.append("0");
                i += 1;
            } else if (i + 1 < n && s.charAt(i) == '-' && s.charAt(i+1) == '.') {
                res.append("1");
                i += 2;
            } else {
                res.append("2");
                i += 2;
            }
        }
        System.out.println(res.toString());
        scanner.close();
    }
}
