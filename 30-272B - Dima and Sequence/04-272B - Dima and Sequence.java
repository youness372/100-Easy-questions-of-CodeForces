import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        if (!sc.hasNextInt()) return;
        int n = sc.nextInt();
        Map<Integer, Long> counts = new HashMap<>();
        
        for (int i = 0; i < n; i++) {
            long num = sc.nextLong();
            int cpt = 0;
            
            while (num > 0) {
                if (num % 2 == 1) {
                    cpt++;
                }
                num /= 2;
            }
            
            counts.put(cpt, counts.getOrDefault(cpt, 0L) + 1);
        }
        
        long totalSum = 0;
        for (long k : counts.values()) {
            if (k >= 2) {
                totalSum += (k * (k - 1)) / 2;
            }
        }
        
        System.out.println(totalSum);
    }
}
