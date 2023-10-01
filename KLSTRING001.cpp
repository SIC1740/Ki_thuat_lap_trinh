//XÂU KÍ TỰ
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement(){
    string a, b, ch, c, d, pr;
    cin >> a >> b >> ch >> c >> d >> pr;
    ch.pop_back();
    ch.pop_back(); ch.erase(ch.begin());
    pr.pop_back(); pr.erase(pr.begin());
    int x = ch.size(), y = pr.size();
    if(!x) {
        cout << 0 ;
        return ;
    }
    if(!y){
        cout << -1;
        return ;
    }
        for(int i=0; i<=ln - lnc ; i++){
            if(s[i]==sc[0]){
                check = 0 ;
                for(int j = 1 ; j<lnc ; ++j){
                    if(sc[j]!=s[i+j]){
                        check = 1  ; 
                        return;
                    }
                }
                if(check==0){
                    cout << i  ;
                     ans = 1 ; 
                     return ;
                     }
            }
        }
        if(ans==0)cout << -1 << '\n';
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
