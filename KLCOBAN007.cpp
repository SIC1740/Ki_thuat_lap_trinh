#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

//hàm nhân 2 số nguyên dương lớn 
string mul(string a, string b){
    int m = a.size();
    int n = b.size();
    vector<int>result(m+n,0);

    for(int i = m - 1 ; i >= 0 ; --i){
        for(int j = n-1; j >= 0 ; --j){
            int mul = (a[i] - '0') * (b[j] -'0');
            int sum = mul + result[i + j + 1];
            result[i+j+1] = sum % 10;
            result[i + j] += sum/10;
        }
    }
    string res = "";
    for(int digit : result){
        if(!(res.empty() && digit == 0)){
            res += to_string(digit);
        }
    }
    return res.empty() ? "0" : res;
}
void implement(){
    int n , k , m;
    cin >> n >> k >> m;
    string res = "1";
    for(long long i = 0 ; i < k ; ++ i){
        res = mul(res,to_string(n));
    }
    string res1 = res.substr(0,m);
    cout << res1;
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
