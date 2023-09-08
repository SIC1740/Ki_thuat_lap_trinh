#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    int n ,i;
    float x , s, t ;
    unsigned long long m ;
    do{
        cin >> n ;
        if(n < 1){
            cout << "Nhap lai n";
        }
    } while(n < 1);
        cin >> x ;
        s = 0.0;
        t = 1.0; 
        m = 0;
        i = 1;
        while(i <= n){
            t = t * x;
            m = m + i ;
            s += t/m;
            i ++;
        }
    // cin >> n >> x ;
    // for(int i = 1 ; i <= n ; ++ i){
    //     double s = 1 ;
    //     for(int k = 1 ; k <= i ; k ++){
    //         s *= k ;
    //     }
    //     sum += pow(x,i)/s;
    // }
    cout << fixed << setprecision(3) << s  << endl;

}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        implement();
    }
    return 0;
}