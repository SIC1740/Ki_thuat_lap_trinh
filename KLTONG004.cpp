#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

ll n, cs, a, m, key[100005], mx, t, gt, ans, test[100005];
ll tinh(ll x){
ll ans=1;
while(x) ans*=(x%10), x/=10;
return ans;
}
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  f(i,1,1e3){
    if(tinh(i)>mx) mx=tinh(i), gt=i;
    key[i]=gt;
  }
  //f(i,1,99) cout<<i<<" "<<key[i]<<'\n';
  cin >> t;
  while(t--){
    //f(p,100,1e5){
    cin >> n;
    if(n<1000) {cout<<tinh(key[n])<<'\n'; continue;}
    m=n, cs=0, ans=1;
    while(m) cs++, m/=10;
    a=n;
    f(i,1,cs-3) a/=10;
    m=a;
    f(i,1,cs-3) m=m*10+9;
    if(m==n) m=key[a];
    else m=key[a-1];
    f(i,1,cs-3) m=m*10+9;
    cout<<tinh(m)<<'\n';
    //}
  }
  //f(i,100,1e5) if(test[i]!=key[i]) cout<<i<<" "<<test[i]<<" "<<key[i]<<'\n';
return 0;
}