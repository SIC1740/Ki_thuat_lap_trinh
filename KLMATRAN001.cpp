//ĐƯỜNG ĐI LỚN NHẤT
#include<bits/stdc++.h>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n , m;
    cin >> n >> m;
    int a[n+1][m+1];
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = n - 2; i >= 0; --i){
        for(int j = 0 ; j < m ; ++j){
            int left = (j > 0) ? a[i + 1][j - 1] : 0;
            int up = a[i+1][j];
            int right = (j < m -1) ? a[i+1][j+1] : 0;
            a[i][j] += max({left,up,right});
        }
    }
    int res = 0 ;
    for(int j = 0 ; j < m ; ++j){
        res = max(res,a[0][j]);
    }
    cout << res;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        implement();
        cout << endl;
    }
    return 0;
}
