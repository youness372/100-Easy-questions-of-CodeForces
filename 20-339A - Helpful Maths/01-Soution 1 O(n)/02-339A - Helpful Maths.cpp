#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int count1 = 0, count2 = 0, count3 = 0;

    for (char c : s) {
        if (c == '1') count1++;
        else if (c == '2') count2++;
        else if (c == '3') count3++;
    }

    string result = "";

    for (int i = 0; i < count1; i++) result += "1+";
    for (int i = 0; i < count2; i++) result += "2+";
    for (int i = 0; i < count3; i++) result += "3+";

    if (!result.empty()) {
        result.pop_back();
    }

    cout << result << endl;

    return 0;
}
