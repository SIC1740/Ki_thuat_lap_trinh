//ĐƯỜNG ĐI CÓ TỔNG LỚN NHẤT
#include <bits/stdc++.h>
using namespace std;

const int maxn = 105;
const int INF = 1e18;

int a[maxn][maxn], f[maxn][maxn];
int m, n;

void implement() {
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        f[i][0] = a[i][0];
    }

    for (int j = 1; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            f[i][j] = a[i][j] + max({(i > 0) ? f[i - 1][j - 1] : -INF, f[i][j - 1], (i < m - 1) ? f[i + 1][j - 1] : -INF});
        }
    }

    int res = -INF;
    for (int i = 0; i < m; ++i) {
        res = max(res, f[i][n - 1]);
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        implement();
    }
    return 0;
}
