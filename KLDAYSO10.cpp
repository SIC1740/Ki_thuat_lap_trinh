#include<bits/stdc++.h>
using namespace std;
#define int long long

void implement(){
    int n, l, a;
        unsigned long long sum = 0;
        cin >> n >> l;
        for (int i = 1; i <= n - 1; ++i) {
            cin >> a;
            sum += a;
        }
        unsigned long long ans = l * n + pow(n, 2) / 2 - n / 2;
        ans -= sum;
        cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        implement();
    }
    return 0;
}
KLBDS004