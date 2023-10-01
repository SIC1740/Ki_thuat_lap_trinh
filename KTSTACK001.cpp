//KIỂM TRA DÃY NGOẶC ĐÚNG
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
    int open = 0 ,close = 0 ;
    for(int i = 0  ; i < s.length(); ++i){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            ++ open ;
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top() == '(' && s[i] == ')'){
                -- open ;
                st.pop();
            }
            else if(!st.empty() && st.top() == '{' && s[i] == '}'){
                -- open ;
                st.pop();
            }
            else if(!st.empty() && st.top() == '[' && s[i] == ']'){
                -- open ;
                st.pop();
            }
            else{
                close ++ ;
            }
        }
    }
    if(close == 0 && open == 0) cout << "YES";
    else cout << "NO";
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
