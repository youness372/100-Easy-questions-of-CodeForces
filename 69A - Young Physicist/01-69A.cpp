#include<iostream>     
using namespace  std ;    

int main  ()  {   
   

    int  n  ;   
    cin  >> n   ;     
    int  i  = 0  ;       
    int suma = 0  ,  sumb = 0 ,  sumc = 0  ;       
    while (i  < n  +1  )
    {
        int   a ,  b  ,  c ;   
        cin  >>  a >>  b  >> c ;       
        suma +=  a  ;   
        sumb +=  b  ;   
        sumc +=  c ;       

        i +=  1  ;  
         
    }   
    if  (suma == 0  &&  sumb  == 0  &&  sumc == 0 )  {   
        cout <<  "YES" << endl  ;   

    }   
    else   {   
         cout <<  "NO" <<  endl  ;  
    }
       
    return  0  ;   
}
