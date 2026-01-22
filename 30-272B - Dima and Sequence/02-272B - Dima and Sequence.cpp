#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<int, long long> counts;

    for (int i = 0 ; i < n ; i++) {
        long long num;
        cin >> num;
        int cpt = 0;
        while (num >  0 ) {
            if (num %  2 ==  1) {
                cpt++;
            }
            num   /=  2;
        }
        counts[cpt]++;
    }

    long long total_sum = 0;
    for (auto const& [f_x, k]  : counts) {
        if (k >= 2) {
            total_sum += (k * (k - 1)) / 2;
        }
    }

    cout << total_sum << endl;

    return 0;
}
