//ĐẾM GIAI THỪA
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define FOR(i,a,b) for(int i = (a),_b=(b); i <= b; i ++)
#define FOD(i,a,b) for(int i =(a),_b=(b); i >= b; i --)
#define REP(i,a) for(int i = 0,_a=(a); i <_a; i ++)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define int long long

const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;
const double PI = acos(-1.0);
const double e = 2.71828183;

int Dig(int x){
    if(x <= 3) return 1;
    return(int)(1. + floor(log10(x*PI*2)/2 + log10(x/e) * x));
}
void implement(){
    int k ; cin >> k;
    int left, right, l, r;
    l = 0; r = 1000111000; left = r;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(Dig(mid) >= k){
            left = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    l = 0, r = 1000111000, right = l;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(Dig(mid) <= k){
            right = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    if(Dig(left) != k){
        cout <<"NO";
    }
    else {
        cout << right - left + 1 <<" ";
        FOR(i,left,right) cout << i << " ";
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
