
# *69A - Young Physicist*  
[![Codeforces: Young Physicist](https://img.shields.io/badge/Codeforces-Young_Physicist_69A-blue)](https://codeforces.com/problemset/problem/69/A)

---

##  *The Problem 🧩*   

<img width="1117" height="692" alt="image" src="https://github.com/user-attachments/assets/ceaedc76-f0ae-4fb1-9368-0116f65b04d7" />



##    *Examples ⛓️‍💥*       
### *Input*      
  
    3
    4 1 7
    -2 4 -1
    1 -5 -3   
###  *Output*   
    NO      

  

##  *Explaination ⛓️‍💥*   

<img width="1017" height="535" alt="image" src="https://github.com/user-attachments/assets/80cd3ac7-0e9a-43c5-8e57-9c84af2424f0" />

##   *code Implementation 💻*        

###  *C++  Implementation ©️*   

```cpp
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
```
### *Java Implementation*    


```java

public  static  void  main ( String [] args)   {
  int sumA  =  0   ;
  int sumB = 0  ;
  int sumC  = 0  ;
  int i  = 0  ;
  int n  ;
  Scanner read  =    new  Scanner(System.in) ;
  n  =  read.nextInt();
  while   ( i  < n+1 )  {
       int   a  , b  ,c   ;
       a  =  read.nextInt();
       b  =  read.nextInt();
       c  =  read.nextInt();
       sumA +=  a ;
       sumB +=  b ;
       sumC +=  c ;
       i +=  1   ;       
    }
  if  (sumA == 0 &&  sumB == 0 &&  sumC == 0 )   {
      System.out.println("YES");   
    }
  else {
      System.out.println("NO");   
  }
}
```
### *Python Implementation*   

```py
n = int(input())

sum_x = 0
sum_y = 0
sum_z = 0

for _ in range(n):
    x, y, z = map(int, input().split())
    
    sum_x += x
    sum_y += y
    sum_z += z

if sum_x == 0 and sum_y == 0 and sum_z == 0:
    print("YES")
else:
    print("NO")

```     

###  *See you  Soon as Possible*   


<img width="1006" height="800" alt="Screenshot 2025-09-06 183231" src="https://github.com/user-attachments/assets/f1e30980-ee03-46fe-b880-c85cce0c2f62" />



    
