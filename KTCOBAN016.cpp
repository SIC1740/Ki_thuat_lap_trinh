#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

vector<int>mul(vector<int>&a , vector<int>&b){
    int m = a.size();
    int n = b.size();

    vector<int>res(m + n , 0);

    for(int i = m -1; i >= 0; --i){
        for(int j = n -1 ; j >= 0 ; --j){
            int tmp = (a[i] - '0')*(b[j] -'0');
            int sum = res[i + j + 1] + tmp;
            res[i + j + 1] = sum % 10 ;
            res[i + j] += sum / 10 ;
        }
    }
    int i = 0 ;
    while(i <m + n -1 && res[i] == 0){
        i ++;
    }
    vector<int>finalres(res.begin() + i , res.end());
    return finalres;
}
void implement(){
    int n ;
    cin >> n ;
    string num(n,'1');
    vector<int>a(num.begin(),num.end());
    vector<int>res = mul(a,a);

    for(auto digit : res){
        cout << digit;
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
