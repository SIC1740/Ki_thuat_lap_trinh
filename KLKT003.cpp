//Dãy chữ số đầu tiên của lũy thừa
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

string mul(string a, int b){
    int carry = 0 , pro;
    string res;
    for(int i = a.size() - 1 ; i >= 0 ; --i){
        pro = (a[i] - '0') * b + carry;
        carry = pro/10;
        res.insert(res.begin(), pro % 10 + '0');
    }
    while(carry){
        res.insert(res.begin(),carry % 10 + '0');
        carry /= 10 ;
    }
    return res;
}
string power(int n , int m){
    string res = "1";
    for(int i = 0 ; i < m ; ++i){
        res = mul(res,n);
    }
    return res;
}
void implement(){
    int n , m , k ;
    cin >> n >> m >> k ;
    string res = power(n,m);
    for(int i = 0 ; i < k ; ++i){
        cout << res[i];
    }
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
