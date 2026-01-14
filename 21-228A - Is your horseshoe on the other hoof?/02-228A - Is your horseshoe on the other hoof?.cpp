#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> colors;
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        colors.insert(x);
    }
    cout << 4 - colors.size() << endl;
    return 0;
}
