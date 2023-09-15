#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int poww(int a, int b) {
    int ans = 1;
    while (b) {
        if (b % 2 == 1) {
            ans = (ans * a) ;
        }
        b /= 2;
        a = (a * a);
    }
    return ans;
}
void implement(){
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    int sum1 = 0, sum2 = 0 ;
    // for(int i = 0 ;i < n ; i++){
    //     if(s1[i] - '0' == 1){
    //          sum1 += poww(2,n-i-1);
    //     }
    //     if(s2[i] -'0' == 1){
    //         sum2 += poww(2,n-i-1);
    //     }
    // }
    for(int i = 0 ; i < s1.length(); i ++){
        if(s1[i] == '1'){
            sum1 += poww(2,s1.length()-i-1);
        }
    }
    for(int i = 0 ; i < s2.length(); i ++){
       if(s2[i] == '1'){
            sum2 += poww(2,s2.length()-i-1);
        }
    }
    // cout << sum1  << " " << sum2;
    if(sum1 < sum2) cout << sum2-sum1-1;
    else if(sum1 > sum2) cout << sum1-sum2-1;
    else cout << 0 ;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        implement();
        cout << endl;
        cout << endl;
    }
    return 0;
}
