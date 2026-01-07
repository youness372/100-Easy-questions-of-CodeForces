#include <iostream>
#include <cmath>
using namespace std;

long long S(long long n) {
    long long cpt = 0;
    while (n != 0) {
        cpt += n % 10;
        n /= 10;
    }
    return cpt;
}

int main() {
    long long n;
    cin >> n;

    long long sqrt_ = sqrt((long double)n);
    long long start = max(1LL, sqrt_ - 162);
    long long end = sqrt_;

    bool found = false;
    for (long long x = start; x <= end; x++) {
        if (x*x + S(x)*x == n) {
            cout << x << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << -1 << endl;

    return 0;
}
