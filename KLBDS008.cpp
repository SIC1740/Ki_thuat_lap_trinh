//Biểu diễn số thành tổng của các số chẵn
#include <bis/stdc++.h>
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;

ll tinh(int n) {
    if (n == 0) return 1;
    if (n % 2) return (2 * tinh(n - 1)) % MOD;
    ll tmp = tinh(n / 2);
    return (tmp * tmp) % MOD;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n % 2) {
            cout << -1 << '\n';
        } else {
            if (n == 2) {
                cout << 1 << '\n';
            } else {
                cout << tinh((n - 2) / 2) << '\n';
            }
        }
    }
    return 0;
}