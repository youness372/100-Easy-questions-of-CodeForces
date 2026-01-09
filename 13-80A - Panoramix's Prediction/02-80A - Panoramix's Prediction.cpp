#include<iostream>   
using namespace  std ;    

bool PrimaryNum (int n) {  
        if (n ==  0 || n == 1) {  
            return false ;  
        }  
        for (int i = 2 ;  i < n ; i++)  {  
            if (n % i == 0 )
            {
                return false ; 
            }
            
        }
        return true ;  
    }
int main  () {  

    int n ,  m  ;    
    cin >>  n  >> m ;   
    int ver = -1 ;   
    for (int i = n+1; i < m ; i++)
    {
        if (PrimaryNum(i))  {  
            ver = i;  
            break;  
        }
    }   
    if (m ==  ver)
    {
        cout << "YES"  << endl  ;   
    }   
    else  {  
        cout << "NO" <<  endl  ;  
    }
    return 0 ;   
}
