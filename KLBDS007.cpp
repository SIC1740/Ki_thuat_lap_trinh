//Biểu diễn số thành tổng của các số luỹ thừa của 2
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int cnt(int n){
    vector<int>dp(n+1,0);
    dp[0] = 1; // có một cách để biểu diễn số 0
    for(int i = 0 ; (1 << i) <= n; i ++){
        int val = 1 << i;
        for(int j = val; j <= n ; j ++){
            dp[j] += dp[j-val];
        }
    }
    return dp[n];
}
void implement(){
    int n;
    cin >> n;
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
