#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    int n = s.length();
    int i = 0;
    std::string res = "";

    while (i < n) {
        if (s[i] == '.') {
            res += "0";
            i += 1;
        } else if (s[i] == '-' && i + 1 < n && s[i+1] == '.') {
            res += "1";
            i += 2;
        } else {
            res += "2";
            i += 2;
        }
    }
    std::cout << res << std::endl;
    return 0;
}
