//Đếm số nguyên tố hoàn toàn 
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int mod = 1e9 + 7;

#define maxn 1000007 

int p[maxn];

bool check(int n){
    while(n > 0){
        int a = n % 10 ;
        if(a != 2 && a != 3 && a != 5 && a != 7)
            return false ;
        n /= 10 ;
    }
    return true ;
}
void sang()
    {
        for(int i = 0 ;i <= maxn ; i++)
            p[i] = 1;
            p[0] = p[1] = 0;
        for(int i = 2 ;i <= sqrt(maxn); i++)
            {
                 if(p[i] == 1)
                     {
                         for(int j = i*i ; j <= maxn ; j += i)
                             p[j] = 0;
                     }
            }
    }
void implement(){
    int n ;
    cin >> n;
    sang();
    int cnt = 0 ;
    if(n < 2 ){
        cout << 0 ;
        return ;
    }
    for(int i = 2 ; i <= n ; ++ i){
        if(p[i] == 1 && check(i))
            ++ cnt ;
    }
    cout << cnt ;
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