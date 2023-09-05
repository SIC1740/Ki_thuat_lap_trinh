#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int fb[100];
void fibo(){
    fb[1] = fb[2] = 1;
    for(int i = 3 ; i < 93 ; i ++){
        fb[i] = fb[i-1] + fb[i-2];
    }
}
// bool isFibo(int num) {
//     fibo();
//     int cnt = 0 ;
//     for(int i = 1 ; i < 93 ; i ++){
//         if(num == fb[i])
//             ++ cnt ;
//     }
//     if( cnt == 0) return false;
//     else return true;
// }

int findNonFibo(int n) {
    int res = 3 + n ;
    int cnt = 0 ;
    int res1 = res;
    for(int i = 5 ; i < 93 ; i ++){
        if(fb[i] <= res){
            cnt ++ ;
        }
    }
    res += cnt ;
    int cnt2 = 0;
    for(int i = 5 ; i < 93 ; i ++){
        if(fb[i] > res1 && fb[i] <= res){
            cnt2 ++ ;
        }
    }
    res += cnt2 ;
    return res ;
}
void implement(){
    int n ;
    cin >> n ;
    fibo();
    int res = findNonFibo(n);
    cout << res ;
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