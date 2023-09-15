//TỔ HỢP K CỦA N PHẦN TỬ
#include<bits/stdc++.h>
using namespace std;

int n , k ;
vector<int>a,b ;
long long c[1001][1001];

void prepare(){
	for (int i = 0 ; i <= n; ++i){
		for (int j = 0 ; j <= i ; ++ j){
			if (j == 0 || j == i)
				c[i][j] = 1;
			else if (j == 1 || j == i -1)
				c[i][j] = i ;
			else 
				c[i][j] = c[i-1][j-1] + c[i-1][j];
		}
	}
}

void solve(){
    cout << "[";
	for (int i = 1 ; i <= k; i ++){
		cout << a[b[i]];
        if(i < k){
            cout << " ";
        }
	}
	cout << "]"<< endl ;
}
void Try(int i){
	for (int j = b[i-1]+1; j <= n-k+i; j++){
		b[i] = j;
		if (i == k)
			solve();
		else 
			Try(i+1);
	}
}
void testcase(){
	cin >> n >> k ;
    prepare();
    cout << c[n][k] << endl;
	a.resize(n+1);
    b.clear();
    b.resize(n+1,0);
    for(int i = 1 ; i <= n ; i ++){
        a[i] = i ;
    }
	Try(1);
}
int main()
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