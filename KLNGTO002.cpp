//ĐẾM SỐ NGUYÊN TỐ
#include <bits/stdc++.h>
using namespace std;

void sang(int a, int b, vector<int>& p) {
    for (int i = 0; i <= b; i++)
        p[i] = 1;
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= b; i++) {
        if (p[i] == 1) {
            for (int j = i * i; j <= b; j += i)
                p[j] = 0;
        }
    }
}

void implement() {
    int a , b;
    cin >> a >> b;
    vector<int> p(b + 1);
    sang(a, b, p);
    int cnt = 0;
    for (int i = a; i <= b; ++i) {
        if (p[i]) ++cnt;
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        implement();
        cout << endl;
    }
    return 0;
}