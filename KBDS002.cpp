#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int cnt(int n , int k){
    int dp[n+1][k+1];
    // Khởi tạo dp bới các giá trị ban đầu
    memset(dp,0,sizeof(dp));
    // Khởi tạo trường hợp cơ sở
    for(int i = 0 ; i <= n ; ++i){
        dp[i][0] = 0 ;
    }
    for(int i = 0 ; i <= k ; ++ i){
        dp[0][i] = 1;
    }
    for(int i = 1 ; i <= n; ++i){
        for(int j = 1 ; j <= k ; ++ j){
            for(int k = 0 ; k <= i ; ++ k){
                dp[i][j] += dp[i-k][j-1];
            }
        }
    }
    return dp[n][k];
}
void implement(){
    int n , k ;
    cin >> n >> k ;
    int res = cnt(n,k);
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