//Xây dựng array từ stack
#include<bits/stdc++.h>
using namespace std ;
#define int long long

queue<string> targets(vector<int>& target, int n) {
    queue<string> res;
    int num = 1;
    int j = 0;
    while(num <= n && j < target.size()) {
        res.push("Push");
        if(num == target[j]) {
            j++;
        } else {
            res.push("Pop");
        }
        num++;
    }
    return res;
}


void implement(){
    string s ;
    int n ;
    cin >> s >> n ;
    vector<int>vt;
    size_t pos = 0 ;
    string token ;
    while((pos = s.find(',')) != string::npos){
        token = s.substr(0,pos);
        vt.push_back(stoi(token));
        s.erase(0,pos+1);
    }
    vt.push_back(stoi(s));
    
    queue<string> res = targets(vt,n);
    while(!res.empty()) {
        cout << res.front();
        res.pop();
        if(!res.empty())
            cout << ", ";
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
