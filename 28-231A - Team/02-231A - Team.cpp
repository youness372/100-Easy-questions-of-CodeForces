#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int total_cpt = 0;

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2) {
            total_cpt++;
        }
    }
    cout << total_cpt << endl;
    return 0;
}
