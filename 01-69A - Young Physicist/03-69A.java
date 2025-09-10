
public  static  void  main ( String [] args)   {
  int sumA  =  0   ;
  int sumB = 0  ;
  int sumC  = 0  ;
  int i  = 0  ;
  int n  ;
  Scanner read  =    new  Scanner(System.in) ;
  n  =  read.nextInt();
  while   ( i  < n+1 )  {
       int   a  , b  ,c   ;
       a  =  read.nextInt();
       b  =  read.nextInt();
       c  =  read.nextInt();
       sumA +=  a ;
       sumB +=  b ;
       sumC +=  c ;
       i +=  1   ;       
    }
  if  (sumA == 0 &&  sumB == 0 &&  sumC == 0 )   {
      System.out.println("YES");   
    }
  else {
      System.out.println("NO");   
  }
}
