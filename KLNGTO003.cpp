//NGUYÊN TỐ TỔNG
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void implement() {
    int n;
    cin >> n;
    if (n % 2 == 0) n++;
    while (true) {
        if (isPrime(n) && isPrime(n - 2)) {
            cout << n << endl;
            return;
        }
        n += 2;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        implement();
    }
    return 0;
}
