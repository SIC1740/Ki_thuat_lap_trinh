#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long n ;
    ifstream fi("input.txt");
    ofstream fo("output.txt");
    while(fi>>n){
        string res ="";
        stack <char>st;
        while(n > 0){
        n-- ;
        char name = 'A' +(n%26);
        st.push(name);
        n /= 26;
        }
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        fo << res <<endl;
    }
    fi.close();
    fo.close();

    return 0 ;
}