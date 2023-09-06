#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e5 + 7;
const int mod = 1e9 + 7;

int cnt(int n){
    int dp[maxn] ={0};
    dp[0] = 1 ;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = i ; j <= n; j ++){
            dp[j] = (dp[j] +dp[j-i])% mod ;
        }
    }
    return (dp[n]-1 + mod) % mod; // trừ 1 để loại trường hượp n = n
}
void implement(){
    int n ;
    cin >> n ;
    int res = cnt(n);
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
