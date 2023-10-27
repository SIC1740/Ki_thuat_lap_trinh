//Tính số lượng học sinh không được ăn
#include<bits/stdc++.h>
using namespace std ;
#define int long long

int cnts(vector<int>std, vector<int>sand){
    queue<int>q;
    stack<int>st;
    for(int st : std){
        q.push(st);
    }
    for(int i = sand.size()-1; i >= 0 ;i --){
        st.push(sand[i]);
    }
    int cnt = 0 ;
    while(!q.empty()){
        if(q.front() == st.top()){
            st.pop();
            q.pop();
            cnt = 0 ;
        }
        else{
            int tmp = q.front();
            q.pop();
            q.push(tmp);
            cnt ++ ;
            if( cnt == q.size())
                return cnt ;
        }
    }
    return 0 ;
}
void implement(){
    string s,s1;
    cin >> s >> s1;
    vector<int>std;
    vector<int>sand;
    for(char c : s){
        if(isdigit(c))
            std.push_back(c - '0');
    }
    for(char c : s1){
        if(isdigit(c))
            sand.push_back(c - '0');
    }
    cout << cnts(std,sand);
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
