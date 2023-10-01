#include<bits/stdc++.h>
using namespace std;
#define int long long

int p, n, s, a[20], snt[505], c, check[505], z;

bool checknt(int n){
    if(n <= 1) return 0;
    for(int i = 2 ;i <= sqrt(n); ++i)
        if(n % i == 0) return 0;
    return 1;
}

void print(){
    z = 1;
    for(int i = 1; i <= n; ++i) cout << snt[a[i]] << " ";
    cout << '\n';
}

void Try(int k, int sum){
    if(k == n + 1){
        if(sum == s) print();
    }
    else {
        for(int i = a[k-1] + 1; i <= c; ++i){
            if(check[i] == 0){
                if(sum + snt[i] <= s){
                    check[i] = 1;
                    a[k] = i;
                    Try(k+1,sum+snt[i]);
                    check[i] = 0;
                }
                else break;
            }
        }
    }
}

void implement(){
    cin >> p >> n >> s;
    for(int i = p + 1; i <= s; ++i)
        if(checknt(i)) snt[++c] = i;
    z = 0;
    Try(1, 0);
    if(z == 0) cout << -1;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   int t = 1;
    while(t--){
        implement();
        cout << endl;
    }
    return 0;
}
