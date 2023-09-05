#include<bits/stdc++.h>
using namespace std;


void testcase(){
	int x, y , m;
	cin >> x >> y >> m ;
	int a = m/x ;
	int sum = a;
	while(a >= y){
		int b = a % y ;
		sum += a/y ;
		a/= y ;
		a += b ;
	}
	cout << sum ;
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}