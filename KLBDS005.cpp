// Biểu diễn số thành tổng các số chính phương
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int cnt(int n){
    vector<int>dp(n+1,0);
    dp[0] = 1; // có một cách duy nhất để biểu diễn số 0 mà không chọn số nào cả

    vector<int>sq;
    for(int i = 1 ; i * i <= n; ++i){
        sq.push_back(i*i);
    }
    for(auto x : sq){
        for(int i = x; i <= n ; ++i){
            dp[i] += dp[i-x];
        }
    }
    return dp[n];
}
void implement(){
    int n ;
    cin >> n ;
    cout << cnt(n); 
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