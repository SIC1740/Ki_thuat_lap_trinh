//Số Armstrong
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n ;
    cin >> n;
    int sum = 0 ;
    int s = n ;
    string s1 = to_string(n);
    int b = s1.length();
    while(s > 0){
        int a = s % 10 ;
        sum += pow(a,b);
        s/= 10 ;
    }
    if(sum == n ) cout << 1 ;
    else cout << 0 ;
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