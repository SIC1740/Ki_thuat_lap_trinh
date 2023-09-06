#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int MOD = 1e9 + 7;

vector<vector<int>> mul(vector<vector<int>>& A, vector<vector<int>>& B) {
    int size = A.size();
    vector<vector<int>> C(size, vector<int>(size, 0));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }

    return C;
}

vector<vector<int>> mE(vector<vector<int>>& M, int exp) {
    int size = M.size();
    vector<vector<int>> res(size, vector<int>(size, 0));

    for (int i = 0; i < size; i++) {
        res[i][i] = 1;
    }

    while (exp > 0) {
        if (exp % 2 == 1) {
            res = mul(res, M);
        }
        M = mul(M, M);
        exp /= 2;
    }

    return res;
}

int countWays(int N) {
    if (N == 1) return 1;
    if (N == 2) return 2;

    vector<vector<int>> baseM = {{1, 1}, {1, 0}};
    vector<vector<int>> resM= mE(baseM, N - 2);

    int ways = (resM[0][0] * 2 + resM[0][1]) % MOD;

    return ways;
}

int32_t main() {
    int t;
    cin >> t ;
    while(t--){
        int N;
        cin >> N;

        int result = countWays(N);
        cout << result << endl;
    }

    return 0;
}
