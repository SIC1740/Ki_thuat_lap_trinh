//ĐẾM DÃY NHỊ PHÂN THỎA MÃN ĐIỀU KIỆN
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int cntz(int n){
    int count = 0 ;
    while(n > 0){
        if((n & 1) == 0) ++ count ;
        n >>= 1;
    }
    return count ;
}
int cntnum(int n ,int k){
    int res = 0 ;
    for(int i = 0 ; i <= n ; ++i){
        if(cntz(i) == k) ++ res;
    }
    return res;
}
void implement(){
    int n , k;
    cin >> n >> k ;
    cout << cntnum(n,k);
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
