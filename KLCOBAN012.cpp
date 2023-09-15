//SỐ ĐỐI XỨNG GẦN NHẤT
#include<bits/stdc++.h>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int check(int n){
    string s = to_string(n);
    int len = s.length();
    for(int i = 0 ; i < len/2; ++ i){
        if(s[i] != s[len - i - 1])
            return 0;
    }
    return 1;
}
void implement(){
    int n ;
    cin >> n ;
    if(check(n)){
        cout << n ;
        return ;
    }
    if(n < 10)
        cout << n - 1 << " " << n + 1 << endl;
    else {
        int nho = n - 1 ;
        int lon = n + 1;
        while(!check(nho) && !check(lon)){
            -- nho;
            ++ lon;
        }
        if(check(nho) && check(lon)){
            cout << nho << " " << lon ;
        }
        else if(check(nho)){
            cout << nho ;
        }
        else {
            cout << lon ;
        }
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
