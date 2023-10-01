//SỐ CATALAN THỨ N
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int a[maxn];
int clt(int n){
   if(n <= 1){
    return 1 ;
   }
   if(a[n] != 0){
    return a[n];
   }
   int res = 0 ;
   for(int i = 0 ; i < n ; ++i){
        res += clt(i)*clt(n-i-1) ;
   }
   a[n] = res;
   return res;
}
void implement(){
    int n ;
    cin >> n ;
    cout << clt(n);
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
