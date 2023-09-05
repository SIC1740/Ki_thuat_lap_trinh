#include <bits/stdc++.h>
using namespace std;

void testCase() {
    long long n ;
    cin >> n ;
    long long a; 
    long long cnt = 0;
    for (long long i = 5 ; n/i >= 1 ;i *= 5){
    	cnt += n/i;
	}
	cout << cnt ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T ; cin >> T;
    while (T--) {
        testCase();
        cout << endl;
    }
    return 0;
}