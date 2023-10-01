//TÌM SỐ ĐẶC BIỆT LỚN NHÁT
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int slove(int n){
    int maxpri = - 1;
    while(n % 2 == 0){
        maxpri = 2 ;
        n /=  2;
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        while(n % i == 0){
            maxpri = i ;
            n = n/ i;
        }
    }
    if(n > 2){
        maxpri = n;
    }
    return maxpri;
}
bool check(int n){
    int tmp = slove(n);
    return tmp > sqrt(n);
}
int checkprime(int n){
    for(int i = n; i >= 1; --i){
        if(check(i)){
            return i ;
        }
    }
    return -1;
}
void implement(){
    int n ;
    cin >> n ;
    cout << checkprime(n);
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