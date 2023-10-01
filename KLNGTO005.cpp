//TỔNG ƯỚC SỐ NGUYÊN TỐ LỚN NHẤT CỦA CÁC SỐ KHÔNG VƯỢT QUÁ N
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int n ;
int prime[maxn];
void sang(){
    for(int i = 0; i <= n ; ++i){
        prime[i] = 0 ;
    }
    for(int i = 2 ; i <= n ; ++i){
        if(prime[i] == 0){
            for(int j = i; j <= n ; j += i){
                prime[j] = i;
            }
        }
    }
}
void implement(){
    cin >> n ;
    sang();
    int sum = 0 ;
    if(n == 1) cout << sum;
    else{
        for(int i = 2 ; i <= n ; ++i){
            sum += prime[i];
        }
        cout << sum ;
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
