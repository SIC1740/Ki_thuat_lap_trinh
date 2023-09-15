//HOÁN VỊ THẦN KÌ
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n;
    double k;
    cin >> n >> k ;
    if(k == 0){
        for(int i = 1 ; i <= n ; i ++){
            cout << i << " ";
        }
        return;
    }
    if(k ==(double) n/2){
        for(int i = 1 ; i <= n ; ++ i){
            if(i <= k) {
                cout << i + k << " ";
            }
            else {
                cout << i - k << " ";
            }
        }
        return ;
    }
    cout << - 1;
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