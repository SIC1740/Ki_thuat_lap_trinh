#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int solve(string s){
    int cnt = -1;// Khởi tạo cnt = -1 là trường hợp không có bit 0 
    
    int cnt0 = 0 ;
    int cnt1 = 0 ;
    
    for(char bit : s){
        if(bit == '0'){
            cnt0 ++ ;
        }
        else {
            cnt1 ++ ;
        }
        int dif = cnt0 - cnt1;
        cnt = max(cnt,dif);
        //đặt lại cnt0 và cnt1 nếu dif trở thành âm (tức là có nhiều bit 1 hơn)
        if(dif < 0){
            cnt0 = 0 ;
            cnt1 = 0;
        }
    }
    return cnt;
}
void implement(){
    string s;
    cin >> s;
    int res = solve(s);
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
