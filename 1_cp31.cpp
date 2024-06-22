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
    int a , b;
    cin >> a>> b;
    int k1 , k2;
    cin>> k1 >> k2;
    int q1 , q2;
    cin >> q1 >> q2;
    set<pair<int,int>>s;
    int x = abs(k1-q1);
    int y = abs(k2-q2);
    int delx =  x/2;
    int dely = y/2;

    cout<<"x"<<x <<" "<<y<<"y"<<endl;
    s.insert({delx ,dely});
    s.insert({delx , y-dely});
    s.insert({x-delx , dely});
    s.insert({x-delx, y-dely});
    int ans  = 0 ;
    for(auto it : s){
        cout<<it.first<<" "<<it.second<<endl;
        if(it.first ==abs(a) and it.second==abs(b)) ans++;
        else if(it.first==abs(b) and it.second==abs(a)) ans++;
    }
    cout<<ans<<endl;
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