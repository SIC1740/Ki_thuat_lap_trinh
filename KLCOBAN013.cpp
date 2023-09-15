//BIẾN ĐỔI DƯƠNG
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement() {
    int n;
    cin >> n;
    vector<int> vt;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x ;
        vt.push_back(x);
        if(x == 0) ++ cnt ;
    }
    if (cnt != 0) {
        cout << -1;
        return;
    }
    sort(vt.begin(), vt.end()); 
    for(auto x : vt){
        if(x < 0) ++ cnt ;
    }
    cnt = min(cnt, n - cnt);
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        implement();
        cout << endl;
    }
    return 0;
}
