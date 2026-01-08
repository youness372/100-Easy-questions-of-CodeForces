#include <iostream>        
#include<math.h>   
#include<iomanip> 
using namespace std ;   
int main  ()  {     
    int  a , b ,c  ;     
    std::cin >>  a >> b >> c ;        
    if  (a != 0 )  {    
          
        double  delta   =  (1.0 * b * b ) -  (4.0 * a *c) ;     
        if  (delta  >  0 )  {     
            cout <<  2  <<  endl ;      
            double x1 =   (-b +  sqrt(delta)) /(2*a) ;    
            double x2  =  (-b -  sqrt (delta)) / (2 *a ) ;     
            if  (x1 >  x2 )  {      
            std::cout  <<  std::fixed  <<  std::setprecision(10) ; 
            cout  <<  x2 <<  endl  <<  x1 <<  endl ;     
            }     
            else   {   
            std::cout  <<  std::fixed  <<  std::setprecision(10) ; 
            cout  <<  x1 <<  endl  <<  x2 <<  endl ;     
            }  

        }    
        else   if   (delta  < 0  )  {       
            cout <<  0  << std::endl ;     
        } 
        else  {     
            cout <<  1  << endl  ;       
            double x1  =  (-b) / (2* a) ;    
            std::cout  <<  std::fixed  <<  std::setprecision(10) ;  
            cout <<  x1   <<  endl  ;  
        }
    }    
    else if  (a == 0  &&  b != 0 )  {  
        cout <<  1  << endl  ;    
        double x1  =  - (double)c / b;   
        std::cout  <<  std::fixed  <<  std::setprecision(10) ; 
        cout << x1 <<  endl ;  
    }  

    else if (a  == 0  &&  b == 0  && c == 0  ) {  
        cout << -1 <<  endl  ;  
    }    
    else if (a == 0  &&  b == 0  && c != 0)  {  
        cout << 0 << endl  ; 
    }
    return  0 ;  
}
