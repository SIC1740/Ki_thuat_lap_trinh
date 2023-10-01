#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int max_n(string s) {
    string str = s;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<int> dp(str.size(), 1);
    for (int i = 0; i < str.size(); ++i) {
        for (int j = 0; j < i; ++j) {
            if (str[j] < str[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}

void implement() {
    string s;
    cin >> s;
    cout << max_n(s) << endl; // In kết quả và thêm endl để xuống dòng
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        implement();
    }
    return 0;
}
