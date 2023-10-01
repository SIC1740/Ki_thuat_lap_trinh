//SỬA LẠI DẤU NGOẶC
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    string s ;
    cin >> s ;
    stack<int>st;
    int open = 0 , close = 0 ;
    int ans = 0 ;
    for(int i = 0 ; i < s.length() ; ++ i){
        // if(s[i] == '('){
        //     st.push(s[i]);
        //     ++ open;
        // }
        // else{
        //     if(!st.empty() && st.top() == '('){
        //         st.pop();
        //         -- open;
        //     }
        //     else{
        //         ++ close;
        //         st.push(s[i]);
        //     }
        // }
        if(s[i] == '(') ++ open ;
        else {
            if(open == 0) ans ++, open ++;
            else open --;
        }
    }
    // ans += open/2 + close/2;
    // ans += open % 2 + close % 2;
    ans += open/2;
    cout << ans ;
    
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
