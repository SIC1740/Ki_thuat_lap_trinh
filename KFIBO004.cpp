#include<bits/stdc++.h>
using namespace std;

long long fb[100];
vector<long long>vt;
void fibonacci(){
	fb[0] = 0 ;
	vt.push_back(fb[0]);
	fb[1] = fb[2] = 1 ;
	vt.push_back(fb[1]);
	vt.push_back(fb[2]);
	for (int i = 3 ; i < 93 ; i ++){
		fb[i] = fb[i-1] + fb[i-2];
		vt.push_back(fb[i]);
	}
}

void testcase(){
    memset(fb,0,sizeof(fb));
    vt.clear(); vt.resize(1011);
    fibonacci();
    long long n;
    cin >> n ;
    int cnt = 0 ;
	long long m ;
    for(int i = 0; i < 93 ; i ++){
    	long long k = fb[i];
    	m = n - k;
    	for (long long x : vt){
    		if ( m == x){
    			cout << k << " " << x;
    			cnt ++ ;
    			return ;
			}
		} 
	}
    if(cnt == 0) cout <<  -1 ;
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