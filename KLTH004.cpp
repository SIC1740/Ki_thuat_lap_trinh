//XÂU MẸ CHUNG NGẮN NHẤT
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int f[501][501];
void implement(){
    string s1,s2;
    cin >> s1 >> s2 ;
    memset(f,0,sizeof(f));
    int res = 0 ;
    int len1 = s1.length(), len2 =s2.length();
    for(int i = 1 ; i <= len1; ++i){
        for(int j = 1 ; j <= len2; ++j){
            if(s1[i-1] == s2[j-1]){
                f[i][j] = f[i-1][j-1] + 1;
            }
            else f[i][j] = max(f[i-1][j],f[i][j-1]);
            res = max(res,f[i][j]);
        }
    }
    cout << len1 + len2 - res;
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
