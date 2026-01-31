#include<iostream> 
using namespace std  ;   
int main ()  {   
  int n  , m  ;  
  cin >> n >>  m  ;   
  int  odds_num  =  (n+1) / 2 ;   
  if (odds_num <= m ) {   
    std::cout << 2 * m -1 << endl ;  
    }   
  else {   
   std::cout << 2 * (m - odds_num) << endl ; 
  }
  return 0 ; 
 }
