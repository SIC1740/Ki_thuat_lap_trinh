
#include <bits/stdc++.h>
using namespace std;

#define int long long
int n,m, minKc, ans;
int a[20][20], vs[20];

void Try(int ind, int cou, int val) {
    //! nếu chi phí hiện tại + chi phí tối thiểu để đi (n - k + 1) tp còn lại >= ans thì k cần đi nữa vì chắc chắn k tối ưu
    if (val + minKc * (n - cou + 1) >= ans) return;
    if (cou == n) {
        val += a[ind][1];
        ans = min(ans, val);
        return;
    }
    for (int i = 2; i <= n; ++i) {
        if (vs[i] == 0) {
            vs[i] = 1;
            Try(i, cou + 1, val + a[ind][i]);
            vs[i] = 0;
        }
    }
}

void testCase() {
    minKc = ans = INT_MAX;
    cin >> n >> m;
    memset(a,0,sizeof(a));
    int i, j , c ;
    for (int k = 1; k <= m; ++i) {
        cin >> i >> j >> c;
        a[i][j] = c ;
    }
    vs[1] = 1;
    Try(1, 1, 0);
    cout << ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}