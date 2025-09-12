#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    
    int n = 1000000000; // 10^9
    
    for (int i = m + 1; i < n; i++) {
        int copie = i;
        int a = copie % 10;
        copie /= 10;
        int c = copie % 10;
        copie /= 10;
        int d = copie % 10;
        copie /= 10;
        int e = copie % 10;
        
        if (a != c && c != d && d != a && e != a && c != e && d != e) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
