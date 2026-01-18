#include<iostream>     
using namespace std ;  
 
int main () {     
    int  k   , I, m , n , d ;   
    cin >>  k ;   
    cin >> I  ;   
    cin >>  m ;   
    cin >>  n ;   
    cin >>  d ;      
    int cpt = 0  ; 
    for (int i = 1  ;  i  < d+1; i++)  {     
        if (i % k  == 0  ||  i  % I == 0  ||  i  % m  == 0  || i  % n == 0 )  {  
            cpt++ ;  
        }
    }  
    cout << cpt << endl  ; 
    return  0  ;   
}
