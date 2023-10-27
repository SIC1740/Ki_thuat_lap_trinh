#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 100005
#define MAX 10000007 


int findSubsequence(int arr[], int n)
{
 
    // To store length of maximum length subsequence
    int len = 1;
 
    // To store current element arr[i]
    int tmp;
 
    int i, j, d;
 
    // To store length of subsequence
    // having common digit d
    int dp[10];
 
    memset(dp, 0, sizeof(dp));
 
    // To store digits present in current element
    int cnt[10];
 
    // To store local maximum for current element
    int locMax;
 
    // For first element maximum length is 1 for
    // each digit
    tmp = arr[0];
    while (tmp > 0) {
        dp[tmp % 10] = 1;
        tmp /= 10;
    }
 
    // Find digits of each element, then find length
    // of subsequence for each digit and then find
    // local maximum
    for (i = 1; i < n; i++) {
        tmp = arr[i];
        locMax = 1;
        memset(cnt, 0, sizeof(cnt));
 
        // Find digits in current element
        while (tmp > 0) {
            cnt[tmp % 10] = 1;
            tmp /= 10;
        }
 
        // For each digit present find length of
        // subsequence and find local maximum
        for (d = 0; d <= 9; d++) {
            if (cnt[d]) {
                dp[d]++;
                locMax = max(locMax, dp[d]);
            }
        }
 
        // Update value of dp[d] for each digit
        // present in current element to local maximum
        // found
        for (d = 0; d <= 9; d++) {
            if (cnt[d]) {
                dp[d] = locMax;
            }
        }
 
        // Update maximum length with local maximum
        len = max(len, locMax);
    }
 
    return len;
}

void implement() {
    int n;
    cin >> n;
    cin.ignore();
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> numbers;

    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        numbers.push_back(stoi(substr));
    }

    int arr[numbers.size()];
    for (int j = 0; j < numbers.size(); ++j) {
        arr[j] = numbers[j];
    }

    cout << findSubsequence(arr, numbers.size());
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        implement();
        cout << endl;
    }
    return 0;
}
