#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Maxn = 50;
const int Maxk = 50;

int dp[Maxn + 1][Maxk + 1];

int cnt(int n, int k) {
    if (n == 0 && k == 0) {
        return 1;
    }
    if (n < 0 || k <= 0) {
        return 0;
    }

    if (dp[n][k] != -1) {
        return dp[n][k];
    }

    dp[n][k] = 0;
    for (int i = 1; i <= n; ++i) {
        dp[n][k] += cnt(n - i, k - 1);
    }
    return dp[n][k];
}

void implement() {
    int n, k;
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    int res = cnt(n, k);
    cout << res;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        implement();
        cout << endl;
    }
    return 0;
}