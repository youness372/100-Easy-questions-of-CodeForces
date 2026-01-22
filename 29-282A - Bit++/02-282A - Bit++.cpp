#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int cpt = 0;
    string x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == "++X" || x == "X++") {
            cpt++;
        } else {
            cpt--;
        }
    }

    cout << cpt << endl;

    return 0;
}
