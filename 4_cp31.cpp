#include<bits/stdc++.h>
   using namespace std ;
   #define ll               long long 
   #define F                first
   #define S                second 
   #define pb               push_back
   #define vi               vector<int>
   #define pii              pair<int,int>
   #define all(p)           p.begin(),p.end()
//_________________________________________
const int M = 1e9+7;
  ll mod (ll x){
      return (x%M + M)%M;
   }
  ll mul(ll a , ll b){
       return mod((mod(a) * mod(b)));
   }

 void solve() {
    ll a , c , n ;
    cin >> a >> c >> n;
    vector<int>tools(n);
    for(int i=0 ; i<n ; i++) cin >> tools[i];
    sort(tools.begin() , tools.end());
    ll tm = 0 ;
    ll j = 0;
    while(j <n ){
        tm+=(c-1);
        c = 1;
        // so we need to use the jth tool
        c = min(a , c+tools[j] );
        j++;
        // cout<<tm<<endl;
    }
    tm+=c;
    cout<<tm<<endl;
  }

 int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     ll t;
     cin >> t;
      while(t--){
           solve();
        }

    return 0;
 }