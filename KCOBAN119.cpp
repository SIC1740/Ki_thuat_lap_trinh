#include<bits/stdc++.h>
using namespace std;

long long fb[100];

void fibonacci(){
	fb[1] = fb[2] = 1 ;
	for (int i = 3 ; i < 100 ; i ++){
		fb[i] = fb[i-1] + fb[i-2];
	}
}

void testcase(){
	memset(fb,0,sizeof(fb));
	fibonacci();
	long long n;
	cin >> n ;
	int i = 2 ;
	long long sum = 0 ;
	while(fb[i] <= n){
		if(fb[i] % 2 == 0) sum += fb[i];
		++ i ;
	}
	cout << sum ;
}

int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T ;
	cin >> T ;
	while(T--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}