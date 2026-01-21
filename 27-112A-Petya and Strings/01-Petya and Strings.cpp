#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int cpt = 0;
    for (size_t i = 0; i < s1.length(); i++) {
        if (s1[i] > s2[i]) {
            cpt = 1;
            break;
        } else if (s1[i] < s2[i]) {
            cpt = -1;
            break;
        }
    }
    cout << cpt << endl;
    return 0;
}
