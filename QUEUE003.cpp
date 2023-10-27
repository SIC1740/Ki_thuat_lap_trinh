#include<bits/stdc++.h>
using namespace std;
#define int long long

int wait(vector<int>& tickets, int k) {
    int time = 0;
    int n = tickets.size();

    // Duyệt qua danh sách đến khi người thứ k mua xong
    while (tickets[k] > 0) {
        for (int i = 0; i < n; ++i) {
            // Nếu người này còn vé và đến lượt họ mua
            if (tickets[i] > 0) {
                // Người này mua 1 vé, giảm thời gian và số vé của họ
                tickets[i]--;
                time++;
                
                // Nếu người thứ k đã mua xong, thoát khỏi vòng lặp
                if (i == k && tickets[k] == 0) {
                    return time;
                }
            }
        }
    }
    return time;
}

void implement(){
    string s;
    vector<int> vt;
    int k;
    cin >> s >> k;
    size_t pos = 0;
    string token;
    while ((pos = s.find(',')) != string::npos) {
        token = s.substr(0, pos);
        vt.push_back(stoi(token));
        s.erase(0, pos + 1);
    }
    vt.push_back(stoi(s));

    cout << wait(vt, k);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        implement();
        cout << '\n';
    }
    return 0;
}
