#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

#define maxn 10000007 

int n ;
int p[maxn];
vector<int>vt(101);
int check(int n){
    for(int i = 2 ; i <= sqrt(n); ++i){
        if(n % i == 0){
            return 0 ;
        }
    }
    return n > 1 ;
}
void sang()
    {
        for(int i = 0 ;i <= 100 ; i++)
            p[i] = 1;
            p[0] = p[1] = 0;
        for(int i = 2 ;i <= sqrt(100); i++)
            {
                 if(p[i] == 1)
                     {
                         for(int j = i*i ; j <= maxn ; j += i)
                             p[j] = 0;
                     }
            }
        vt.clear();
        for(int i = 0 ; i <= 100; i ++){
            if(p[i] == 1){
                vt.push_back(i);
            }
        }    
    }
void implement(){
    cin >> n ;
    sang();
    int res = 1 ;
    stack<int>st;
    if(check(n)) {
        res *= pow(2,n-1);
        return ; 
    }
    for(auto x : vt){
        while(n % x == 0){
            st.push(x);
            n/= x;
        }
    }
    for(int i = 0 ; i < st.size(); ++i){
        int a = st.top() - 1;
        res *= pow(vt[i],a);
        st.pop();
    }
    cout << res;
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
