//TÌM VỊ TRÍ SỐ X TRONG DÃY SỐ
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int f_pos(int a[],int n, int x){
    int res = 0 ;
    int l = 0 , r = n-1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == x){
            res = m;
            r = m - 1;
        }
        else if(a[m] < x){
            l = m + 1;

        }
        else {
            r = m -1 ;
        }
    }
    return res;
}
void implement(){
    int n , m ;
    cin >> n >> m;
    int a[n],b[m];
    for(int i = 0 ; i < n ; ++ i){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; ++ i){
        cin >> b[i];
    }
    for(int i = 0 ; i < m; ++i ){
        cout << f_pos(a,n,b[i]) << " ";
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

