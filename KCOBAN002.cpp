#include<bits/stdc++.h>
using namespace std;

int k ;
int check(long long n){
	long long x = sqrt(n);
	int cnt = 0 ;
	while(n > 9){
		int a = n % 10 ;
		if(a == 1 || a == 0 || a == 4 || a == 9){
			cnt ++ ;
		}
		n/=10 ;
	}
	if(n == 1 || n == 4 || n == 9) cnt ++ ;
	return cnt == k ;
}
void testcase(){
    cin >> k ;
    long long a = pow(10,k-1), b = pow(10,k) - 1;
    long long x = sqrt(a);
    if(x*x == a ) x ++;
    int cnt = 0 ;
    if(k % 2 != 0){
    	cout << a ;
    	return ;
	}
    else {
    	for(long long i = x ; i <= sqrt(b); i ++){
    		if(check(i*i)){
    			cout << i * i ;
    			cnt ++ ;
    			return ;
			}
		}
	}
	 cout << -1;
    
}
int main()
	{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t ;
    cin >> t ;
    while(t--){
        testcase();
        cout << endl ;
    }
	 return 0;
	}