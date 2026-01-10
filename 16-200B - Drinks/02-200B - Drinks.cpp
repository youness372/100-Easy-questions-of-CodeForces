#include<iostream>  
using namespace std ;   

int main  ()  {   
    int n  ;  
    double sum = 0 ;    
    cin >>  n ;      
    int liste  [n]  ;   
    for (int i= 0  ;  i<n ; i++)  {   
        cin >> liste[i] ;  
    }   
    for  (int i = 0 ;  i< n ; i++ ) {   
        sum +=  liste[i];  
    }
    cout <<  sum / n << endl  ; 
    return 0  ;
}
