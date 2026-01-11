#include<iostream>  
using namespace  std ;  

string waytolong (string s) {
    int n = s.length() ; 
    if (n >10)  {
        return s[0] + to_string(n-2) + s[n-1] ; 
    }
    return s ; 
}
int main  ()  { 
    int n ;  
    cin >> n ; 
    string s ;
    for (int i = 0 ; i < n ; i++)  {
        cin >> s ; 
        cout << waytolong(s) << std::endl ; 
    }
    return  0 ; 
}
