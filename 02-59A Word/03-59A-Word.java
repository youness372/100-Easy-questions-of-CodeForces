import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();

        int lower = 0, upper = 0;

        for (char c : n.toCharArray()) {
            if (c >= 'A' && c <= 'Z') {
                upper++;
            } else {
                lower++;
            }
        }

        if (lower >= upper) {
            n = n.toLowerCase();
        } else {
            n = n.toUpperCase();
        }

        System.out.println(n);
    }
}
