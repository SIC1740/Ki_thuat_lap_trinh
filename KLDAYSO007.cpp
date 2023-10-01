//ĐẾM NHÓM CHỮ SỐ
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int dp[41][411];

int cnt(int index, int pre, string num){
    if(index == num.length()){
        return 1 ;
    }
    if(dp[index][pre] != -1){
        return dp[index][pre];
    }
    int res = 0 ;
    int sum = 0;
    for(int i = index; i < num.length(); ++i){
        sum += num[i] - '0';
        if( sum >= pre){
            res += cnt(i+1,sum,num);
        }
    }
    dp[index][pre] = res;
    return res;
}
void implement(){
    int n ;
    cin >> n ;
    string s ;
    cin >> s;
    memset(dp,-1,sizeof(dp));
    cout << cnt(0,0,s);
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
