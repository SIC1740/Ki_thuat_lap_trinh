//SỐ LƯỢNG NGUYÊN TỬ
#include<bits/stdc++.h>
using namespace std ;
#define int long long

map<string,int>parse(string s){
    map<string,int>cnts;
    stack<map<string,int>>st;
    st.push({});
    for(int i = 0 ; i < s.size();){
        if(s[i] == '('){
            st.push({});
            ++i;
        }
        else if(s[i] == ')'){
            auto top = st.top();
            st.pop();
            ++i;
            int start = i;
            while(i < s.size() && isdigit(s[i])){
                ++i;
            }
            int multi = i > start ? stoi(s.substr(start,i-start)) : 1;
            for(const auto& pair : top){
                st.top()[pair.first] += pair.second * multi;
            }
        }
        else{
            int start = i;
            ++i;
            while(i < s.size() && islower(s[i])){
                ++i;
            }
            string name = s.substr(start,i-start);
            start = i ;
            while(i < s.size() && isdigit(s[i])){
                ++i;
            }
            int count = i > start ? stoi(s.substr(start,i-start)) : 1;
            st.top()[name] += count;
        }
    }
    return st.top();
}
string cnt(const string& formula){
    map<string,int>counts = parse(formula);
    string res;
    for(const auto& pair : counts){
        res += pair.first;
        if(pair.second > 1){
            res += to_string(pair.second);
        }
    }
    return res;
}
void implement(){
    string s;
    cin >> s;
    cout<< cnt(s);
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
