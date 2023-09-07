#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n ;
    cin >> n ;
    if(n == 6 || n == 28 || n == 496 || n ==8128 || n == 33550336 || n == 8589869056	|| n == 137438691328)
        cout << 1 ;
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
