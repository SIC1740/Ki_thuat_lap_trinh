#include <bits/stdc++.h>
using namespace std;

long long sum(long long x){
	long long sum1 = 1 ;
	for (int i = 2 ; i <= sqrt(x) ; i ++ ){
		if(x % i == 0){
			if( x % i != i){
				sum1 += i + x/i ;
			}
			else sum1 += i ;
		}
	}
	return sum1 ;
}
void testcase() {
    long long a , b ;
    cin >> a >> b ;
    if(sum(a) == b && a == sum(b)) cout << "YES";
    else cout << "NO";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T ; cin >> T;
    while (T--) {
        testcase();
        cout << endl;
    }
    return 0;
}