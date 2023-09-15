//LIỆT KÊ HOÁN VỊ
#include<bits/stdc++.h>
using namespace std;
#define int long long

int n ;
vector<int>a,vs;
void sovle(){
	for (int i = 1 ; i<=n; i ++){
		cout << a[i] ;
		if(i < n) cout << " ";
	}
	cout << endl;
}
void Try(int i){
	for (int j = 1 ; j <= n ; ++j){
		if (!vs[j]){
			a[i]=j;
			vs[j] = 1;
			if (i == n)
				sovle();
			else 
				Try(i+1);
			vs[j] = 0 ;
		}
	}
}
void testcase(){
	cin >> n ;
	a.resize(n+1);
	vs.clear();
	vs.resize(n+1,0);
	Try(1);
}
int32_t main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
	}
	 return 0;
	}