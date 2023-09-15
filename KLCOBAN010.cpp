//LŨY THỪA DƯ
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

ll binaryPow(ll a, ll b, ll MOD) {
    ll ans = 1;
    a %= MOD;
    while (b) {
        if (b % 2 == 1) {
            ans = (ans * a) % MOD;
        }
        b /= 2;
        a = (a * a) % MOD;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        cout << binaryPow(a, b, MOD) << endl;
    }
    return 0;
}