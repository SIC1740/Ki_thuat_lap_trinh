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
        m = 1;
        i = 2;
        s = 1.0;
        while(i <= n){
            m = m * i ;
            ++ i ;
            t = 1.0/i;
            s += m;
            s = pow(s,t);
        }
   
    cout << fixed << setprecision(3) << s << endl;

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