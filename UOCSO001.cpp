#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n ;
    cin >> n ;
	if (n == 1) {
		cout << 0;
		return ;
	}
    int sum = 1 ;
    int res = n ;
    for(int i = 2 ; i <= sqrt(n) ; ++i){
        int a = i ;
        if(n % i == 0){
            sum += a + n/a;
        }
        if(i * i == n){
            sum -= a ;
        }
    }
	 cout << sum;
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