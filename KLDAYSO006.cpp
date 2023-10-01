#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

bool cmp(string x , string y){
    return x + y > y + x;
}
void implement(){
    int n;
    cin >> n ;
    vector<string>a(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }   
    sort(a.begin(), a.end(),cmp);

    for(auto s : a){
        cout << s ;
    }
    cout << endl;
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        implement();
    }
    return 0;
}
