import java.util.Scanner;
public class Main   {
   public static void main  (String [args]) {
     Scanner read  = new Scanner(System.in);  
     int n  =  read.nextInt () ; 
     int  sum = 0  ;   
     for (int i  = 0 ; i  < n; i++) {
       int res  = read.nextInt() ;  
       sum  +=  res ;  
     }   

     int cpt = 0 ;   
     for (int i  = 1 ; i < 6 ; i++){
       if ((i + sum) % (n + 1) != 1) ) {
         cpt++; 
       }
     }
      System.out.println(count);
      sc.close(); 
   }
} 
