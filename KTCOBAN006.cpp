#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

vector<int>mul(vector<int>v, int num){
    vector<int>res;
    int carry = 0 ;

    for(int i = 0 ; i < v.size(); ++ i){
        int pro = v[i] * num + carry;
        res.push_back(pro % 10);
        carry = pro/10;
    }
    while(carry > 0){
        res.push_back(carry%10);
        carry /= 10 ;
    }
    return res;
}
vector<int>gt(int n){
    vector<int>res;
    res.push_back(1);
    for(int i = 2 ; i <= n ; ++ i){
        res = mul(res,i);
    }
    return res;
}
void implement(){
    int n ;
    cin >> n ;
    vector<int>res = gt(n);
    for(int i = res.size()-1; i >= 0; --i){
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
