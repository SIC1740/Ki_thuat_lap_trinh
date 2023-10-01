#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int MOD = 1000000007;
// Hàm tính ma trận lũy thừa (mat^n)
vector<vector<long long>> matrixPower(vector<vector<long long>>& mat, int n) {
    int size = mat.size();
    vector<vector<long long>> result(size, vector<long long>(size, 0));
    
    // Ma trận đơn vị
    for (int i = 0; i < size; i++) {
        result[i][i] = 1;
    }
    
    while (n > 0) {
        if (n % 2 == 1) {
            // Nếu n lẻ, nhân với ma trận kết quả
            vector<vector<long long>> temp(size, vector<long long>(size, 0));
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    for (int k = 0; k < size; k++) {
                        temp[i][j] += (result[i][k] * mat[k][j]) % MOD;
                        temp[i][j] %= MOD;
                    }
                }
            }
            result = temp;
        }
        
        // Chia n cho 2 và bình phương ma trận
        vector<vector<long long>> temp(size, vector<long long>(size, 0));
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                for (int k = 0; k < size; k++) {
                    temp[i][j] += (mat[i][k] * mat[k][j]) % MOD;
                    temp[i][j] %= MOD;
                }
            }
        }
        mat = temp;
        n /= 2;
    }
    
    return result;
}

signed main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        // Tạo ma trận chuyển tiếp
        vector<vector<long long>> transitionMatrix(2, vector<long long>(2, 0));
        transitionMatrix[0][0] = 1;
        transitionMatrix[0][1] = 1;
        transitionMatrix[1][0] = 1;
        transitionMatrix[1][1] = 0;
        
        // Tính ma trận lũy thừa transitionMatrix^(N-1)
        vector<vector<long long>> resultMatrix = matrixPower(transitionMatrix, N - 1);
        
        // Kết quả là giá trị ở hàng đầu cột đầu của ma trận kết quả
        cout << resultMatrix[0][0] << endl;
    }
    
    return 0;
}
