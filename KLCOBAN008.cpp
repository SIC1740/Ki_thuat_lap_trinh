//TỔNG HAI SỐ LỚN
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

string addnum(string num1, string num2){
    string res ;
    int a = 0 ;
    if(num1.length() < num2.length()){
        swap(num1,num2);
    }
    int i = num1.length()-1;
    int j = num2.length()-1;
    
    while(i >= 0){
        int dg1 = i >= 0 ? num1[i] - '0' : 0;
        int dg2 = j >= 0 ? num2[j] - '0' : 0;

        int sum = dg1 + dg2 + a;
        a = sum /10 ;
        res.insert(res.begin(),sum%10 + '0');
        i-- ;
        j-- ;
    }
    if(a > 0){
        res.insert(res.begin(),a + '0');
    }
    return res;
}
void implement(){
    string num1 , num2 ;
    cin >> num1 >> num2 ;
    string sum = addnum(num1,num2);
    cout << sum ;
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
