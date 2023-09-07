#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
	int n ;
	cin >> n ;
	int cnt2 = 0 , cnt5 = 0 ;
	while(n > 0){
        cnt5 += n/ 5;
        n /= 5;
}
	cout << cnt5;
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