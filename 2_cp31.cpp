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
    int n , k;
    cin >> n >> k ;
    string s;
    cin >> s;
    vector<int>freq(26);
    for(int i=0; i <s.size() ; i++){
        freq[s[i]-'a']++;
    }
    int odd = 0 ;
    for(int i=0 ;i<26 ; i++){
        if(freq[i] % 2!=0) odd++;
    }
    if( k >=  n){
        cout<<"NO"<<endl;
        return;
    }
    // k is in range k<n 
    if(odd == 0 or odd-1 == k or odd == k or k>odd) {
        cout<<"YES"<<endl;
    }

    else {
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