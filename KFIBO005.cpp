#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int cntfibo(int n){
    vector<int>fb;
    fb.push_back(1);
    fb.push_back(2);

    while(fb.back() + fb[fb.size()-2] <= n){
        fb.push_back(fb.back() + fb[fb.size()-2]);
    }

    vector<int>dp(n+1,0);
    dp[0] = 1;

    for(int i = 0 ; i < fb.size(); ++ i){
        for(int j = n ; j >= fb[i]; -- j){
            dp[j] += dp[j-fb[i]];
        }
    }
    return dp[n];
}
void implement(){
    int n ;
    cin >> n ;
    int res = cntfibo(n);
    cout << res ;
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
