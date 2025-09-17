#include<iostream>   
using namespace std ;   
 
int main()  {      
 
long long n  ;   
int x ;   
int cpt = 0  ;   
cin >> n  ;   
 
while (n)  {   
 
   x = n % 10  ;     
   if (x == 7 ||  x == 4 )   {
   cpt++;  
   }   
   
   n = n / 10 ; 
}
  
 if (cpt == 7  || cpt  == 4)   {   
    cout << "YES" << endl  ; 
 }   
 else {   
  cout << "NO" << endl  ;  
 }
 
return  0 ;  
}
