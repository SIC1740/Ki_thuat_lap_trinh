//SỐ CÔ ĐƠN
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n;
    map<int,int>mp;
    for(int i = 0 ; i < n; ++ i){
        int x ;
        cin >> x ;
        mp[x] ++ ;
    }
    int cnt = 0 ;
    for(auto x : mp){
        if(x.second == 1) ++ cnt ;
    }
    cout << cnt;
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
