//DÃY CẤP SỐ CỘNG
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n ;
    cin >> n ;
    int sum = 0 ;
    if(n < 3) {
        cout << "NO";
        return ;
    }
    int c[n+1];
    for(int i = 0 ; i < n ; ++ i){
        cin >> c[i];
    }
    int d1 = c[1] - c[0];
    for(int i = 2 ; i < n ; i++){
        if(c[i] - c[i-1] != d1){
            cout << "NO";
            return ;
        }
    }
    cout << "YES";
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    while(t--){
        implement();
    }
    return 0;
}