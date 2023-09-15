//PHÂN TÍCH SỐ
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
void implement(){
    int n ;
    cin >> n ;
    int cnt = 0 ;
    if(isPrime(n)){
    	cout << 1;
    	cout << endl << n << " " << 1;
    	return ;
	}
    map<int,int>mp;
    if (n % 2 == 0) ++ cnt ;
    while(n % 2 == 0){
        ++ mp[2];
        n/= 2;
    }
    for(int i = 3 ; i <= sqrt(n); i += 2){
        if(n % i == 0)  ++ cnt ;
        while(n % i == 0){
            mp[i] ++ ;
            n /= i ;
        }
    }
    if(n != 1 ) {
         ++ cnt ;
         mp[n] ++ ;
    }
    cout << cnt ;
    for(auto x : mp){
        cout << endl << x.first << " " << x.second ;
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