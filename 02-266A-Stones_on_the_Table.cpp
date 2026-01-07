#include<iostream>   
using namespace std ;  


int main  ()  {   

    int n  ;     
    char   s [50] ;     
    int cpt = 0  ;    
    cin >>   n  >> s  ;      

    for  (int i  = 0  ; i  <= n -1 ;  i++)  {   
        if (s[i]  ==  s[i+2])  {   
            cpt++ ; 
        }
    }  
    cout <<  cpt ;  

}
