#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;
    string combined = guest + host;
  
    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());
  
    if (combined == pile) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
