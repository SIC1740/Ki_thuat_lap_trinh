#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n , S ;
    cin >> n >> S;
    int w[n+1],v[n+1];
    for(int i = 1; i <= n; ++i) cin >> w[i];
    for(int i = 1; i <= n; ++i) cin >> v[i];

    int dp[n+1][S+1];
    memset(dp,0,sizeof(dp));
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1; j <= S ; ++ j){
            dp[i][j] = dp[i-1][j];
            if(j >= w[i]){
                dp[i][j] = max(dp[i][j],dp[i-1][j-w[i]] + v[i]);
            }
        }
    }
    cout << dp[n][S];
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
