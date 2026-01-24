#include<iostream>   
using namespace std ;   

int main  () {    
    int n ;   
    cin >>  n  ;   

    int  sum = 0 ; 
    for  (int i= 0 ; i <n ; i++)  {   
        int res ;   
        cin >>    res ;   
        sum  +=  res ;  
    }        

    int cpt = 0  ;  
    for (int i =1  ;  i <6  ; i++)  {  
        if  ( ( i +  sum) %  ( n  + 1) != 1) {   
            cpt++ ;  
        }
    }   
    cout <<  cpt <<  endl  ;  
    return 0 ; 
}
