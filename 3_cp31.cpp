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
    ll n , k , x;
    cin >> n >> k >> x;
    ll total_sum =  (n*(n+1))/2;
    // rather tha calculating min and max sum for all the no of digit we can find out the min and max for a given number of digit
    ll min_sum = (k*(k+1))/2;
    ll max_sum = total_sum - ((n-k)*(n-k+1))/2;
    if(x >= min_sum and x <= max_sum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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