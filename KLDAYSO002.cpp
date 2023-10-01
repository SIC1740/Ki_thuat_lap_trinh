//DÃY CON CÓ K PHẦN TỬ BẰNG S 
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int cnt(int n , int k , int s, vector<int>&a){
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(k + 1, vector<int>(s+1,0)));
    for(int i = 0 ; i <= n ; ++i){
        dp[i][0][0] = 1;
    }
    for(int i = 1 ; i <= n; ++i){
        for(int j = 1; j <= k; ++j){
            for(int t = 0; t <= s; t ++){
                dp[i][j][t] = dp[i-1][j][t];
                if(t >= a[i-1]){
                    dp[i][j][t] += dp[i-1][j-1][t-a[i-1]];
                }
            }
        }
    }
    return dp[n][k][s];
}
void implement(){
    int n, k, s;
    cin >> n >> k >> s;
   vector<int>a(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    cout << cnt(n,k,s,a);
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
