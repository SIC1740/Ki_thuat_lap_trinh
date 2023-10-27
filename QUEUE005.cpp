//SỐ LẦN ÍT NHẤT ĐỂ ĐẢO CHUỖI BIT NHẤT ĐỊNH
#include<bits/stdc++.h>
using namespace std ;
#define int long long

int minflip(vector<int>&num, int k){
    int flip = 0 ;
    for(int i = 0 ; i <= num.size()-k; ++i){
        if(num[i] == 0){
            flip ++;
            for(int j = i ; j < i + k ; ++j){
                num[j] = 1 - num[j];
            }
        }
    }
    for(int i : num){
        if(i == 0){
            return -1;
        }
    }
    return flip;
}
void implement(){
    int k;
    string s ;
    cin >> s >> k ;
    vector<int>vt;
    size_t pos ;
    string token;
    while((pos = s.find(',')) != string::npos){
        token = s.substr(0,pos);
        vt.push_back(stoi(token));
        s.erase(0,pos+1);
    }
    vt.push_back(stoi(s));
    cout << minflip(vt,k);
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
