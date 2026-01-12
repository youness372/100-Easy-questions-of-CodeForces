#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";
    string vowels = "AOYEUIaoyeui";

    for (char c : s) {
        if (vowels.find(c) == string::npos) {
            result += '.';
            result += tolower(c);
        }
    }

    cout << result << endl;
    return 0;
}
