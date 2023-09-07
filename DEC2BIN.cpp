#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

string bin(int n){
	if(n == 0)
		return "0";
	
	string bin = "";
	while(n > 0){
		int bit = n % 2 ;
		bin = to_string(bit) + bin;
		n /= 2;
	}
	return bin ;
}
void implement(){
	int n ;
	cin >> n ;
	string s = bin(n);
	cout << s;
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
