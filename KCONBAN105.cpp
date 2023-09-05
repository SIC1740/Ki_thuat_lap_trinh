#include<bits/stdc++.h>
using namespace std ;

long long number3(long long a){
    stack<int>st ;
    while(a > 10){
        int n = a % 10 ;
        if(n == 5)
            n = 3 ;
        st.push(n);
        a /= 10 ;
    }
    if (a == 5)
        a = 3;
    st.push(a);
    long long sum = 0 ;
    while(!st.empty()){
        sum = sum*10 + st.top();
        st.pop();
    }
    return sum ;
}
long long number5(long long a){
    stack<int>st ;
    while(a > 10){
        int n = a % 10 ;
        if(n == 3)
            n = 5 ;
        st.push(n);
        a /= 10 ;
    }
    if (a == 3)
        a = 5;
    st.push(a);
    long long sum = 0 ;
    while(!st.empty()){
        sum =sum*10 + st.top();
        st.pop();
    }
    return sum ;
}
void testcase(){
    long long a, b ;
    cin >> a >> b ;
    long long res1 = number3(a) + number3(b), res2 = number5(a) + number5(b);
    cout << res1 << " " << res2 ;
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