#include<bits/stdc++.h>
using namespace std ;

void testcase(){
    long long a , b ;
    cin >> a >> b ;
    map<long,long>mp;
    if(a < b){
	    for(long long i = a ; i <= b; i ++){
	    	long long num = i;
	    	while(num > 9){
	    		int n = num % 10 ;
	    		mp[n]++;
	    		num /= 10 ;
			}
			if (num >= 0) mp[num]++;
		}
		for(int i = 0 ; i < 10 ; i ++){
			cout << mp[i] << " ";
		}
	}
	else {
		
		 for(long long i = b ; i <= a; i ++){
	    	long long num = i;
	    	while(num > 9){
	    		int n = num % 10 ;
	    		mp[n]++;
	    		num /= 10 ;
			}
			if(num >= 0) mp[num]++;
		}
		for(int i = 0 ; i < 10 ; i ++){
			cout << mp[i] << " ";
		}
	}
}
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

    int t;
    cin >> t ;
    while(t--){
        testcase();
        cout << endl ;
    } 
   return 0 ;
}