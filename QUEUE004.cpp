//ĐẾM SỐ LƯỢNG CÁC ARRAY CON BỊ RÀNG BUỘC CỐ ĐỊNH
#include<bits/stdc++.h>
using namespace std ;
#define int long long

int nums(vector<int>& num, int minK, int maxK){
    int ans = 0 ;
    int j1 = -1, j2 = -1, k = -1 ;
    for(int i = 0 ; i < num.size(); ++i){
        if(num[i] < minK || num[i] > maxK) k = i ;
        if(num[i] == minK) j1 = i ;
        if(num[i] == maxK) j2 = i ;
        ans += max(0LL,min(j1,j2)-k);
    }
    return ans;
}
void implement(){
    string s;
    cin >> s ;
    int minK, maxK;
    cin >> minK >> maxK;
    vector<int>vt;
    size_t pos = 0 ;
    string token;
    while((pos = s.find(',')) != string::npos){
        token = s.substr(0,pos);
        vt.push_back(stoi(token));
        s.erase(0,pos+1);
    }
    vt.push_back(stoi(s));
    cout << nums(vt,minK,maxK);
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
