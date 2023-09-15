//TỔNG LŨY THỪA BẬC N
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

vector<vector<vector<int>>> memo;

int cnt(int m, int n, int num = 1) {
    if (m == 0) {
        return 1;
    }
    if (num > m) {
        return 0;
    }
    if (memo[m][n][num] != -1) {
        return memo[m][n][num];
    }
    int count = 0;
    int poww = pow(num, n);
    if (poww <= m) {
        count += cnt(m - poww, n, num + 1);
    }
    count += cnt(m, n, num + 1);
    return memo[m][n][num] = count;
}

void implement() {
    int m, n;
    cin >> m >> n;
    memo.assign(m + 1, vector<vector<int>>(n + 1, vector<int>(m + 1, -1)));
    int res = cnt(m, n);
    cout << res;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        implement();
        cout << endl;
    }
    return 0;
}
