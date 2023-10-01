//SỐ MŨ LỚN NHẤT CỦA ƯỚC SỐ
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n,p;
    cin >> n >> p;
    int res = 0 ;
    while(n > 0){
        res += n/p;
        n/=p;
    }
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
