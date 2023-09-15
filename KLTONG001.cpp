//TỔNG CÁC SỐ LẺ
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int l , r ;
    cin >> l >> r ;
    if(l % 2 == 0) ++ l;
    if(r % 2 == 0) -- r;
    int sum = ((r - l) / 2 + 1) * (l + r) / 2;
    cout << sum ;
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