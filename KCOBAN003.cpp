#include<bits/stdc++.h>
using namespace std;

void testcase(){
    long long L,R;
    cin >> L >> R;
    if(L<R){
	    long long x =sqrt(L), y = sqrt(R);
	    if(x*x != L) ++x ;
		cout << y-x + 1;
	}
	else {
		long long x =sqrt(R), y = sqrt(L);
	    if(x*x != L) ++x ;
		cout << y-x + 1;
	}
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