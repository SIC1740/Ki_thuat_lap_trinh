#include<bits/stdc++.h>
using namespace std; 

long long c[1001][1001];

void testcase(){
	long long n ;
	cin >> n ;
	map< long long , long long > mp ;
	for (int i = 2 ; i <= sqrt(n) ; i ++){
		while(n % i == 0){
			mp[i] ++ ;
			n/= i ;
		}
	}
	if (n != 1) mp[n] ++ ;
	int max1 = 0 ;
	long long res ;
	for(auto x : mp){
		if (x.second > max1){
			max1 = x.second;
			res = x.first;
		}
	}
	cout<< res << " " << max1 ;
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
//	prepare();
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl;
	}
	 return 0;
	}