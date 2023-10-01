//Biểu diễn số thành tổng K số fibonacci
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
// #define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;
const int MAXF = 43;
int fib[MAXF] = {0};

void fibonacci() {
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < MAXF; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int countWays(int x, int y, int last, map<array<int, 3>, int>& dp) {
    if (y == 0) return x == 0 ? 1 : 0;
    array<int, 3> key = {x, y, last};
    if (dp.find(key) != dp.end()) return dp[key];

    int res = 0;
    for (int i = last; i >= 0 && fib[i] * y >= x; i--) {
        if (fib[i] > x) continue;
        res += countWays(x - fib[i], y - 1, i, dp);
    }
    dp[key] = res;
    return res;
}
void implement(){
    fibonacci();
    int n, k;
     cin >> n >> k;
    map<array<int, 3>, int> dp;
    cout << countWays(n, k, 42, dp) ;
    
}
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
     fibonacci();
    int t; cin >> t;
    while(t--){
        implement();
        cout << endl;
    }
    return 0;
}
