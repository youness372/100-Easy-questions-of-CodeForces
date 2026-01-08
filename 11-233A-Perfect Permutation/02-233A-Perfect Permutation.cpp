#include<iostream>     
#include <vector>
using namespace  std ;  

int main  ()  {     

    int n  ;    
    std::cin  >>  n;     
    if( n  %  2 != 0  )  {   
        cout <<  -1 << endl  ;   
        return 0 ; 
    }    
    vector<int> p (n+1) ;  
    for (int i  = 1 ;  i  <=n  ; i++)  {        
        if (i  %  2 != 0 )  {   
            p[i] = i +1 ;   
        }
        else  {
            p[i] = i -1 ; 
        }
    }    
    for (int i = 1; i <= n ; i++)
    {
        cout  <<  p[i] <<  " " ; 
    }   
    cout <<  endl ;  
    
    return  0 ;   
}   
