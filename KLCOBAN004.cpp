//SỐ ĐỐI XỨNG
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

bool check(int n){
    int a = n ;
    int res = 0 ;
    while(n > 0){
        int b = n % 10 ;
        res = res*10 + b;
        n /= 10 ;
    }
    return res == a;
}
void implement(){
    int n ;
    cin >> n;
    int a = (n-1)/2;
    int res = 9*pow(10,a);
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