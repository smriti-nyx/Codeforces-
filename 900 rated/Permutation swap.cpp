#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
 
    while (t--){
        ll n ;
        cin>>n;
        
        vector<ll> s(n);
        for(ll i = 0 ; i<s.size(); i++){
            cin>>s[i];
        }
        
       
        vector<ll> v; 
        
        ll curr= 0 ; 
        ll best = 0 ;
       
 
        for(ll i = 0 ; i <s.size() ; i++){
            ll diff = abs(s[i] - (i+1));
            v.push_back(diff);
            
        }
           
      
   
 
v.erase(remove(v.begin(), v.end(), 0), v.end());
 ll result = v[0] ; 
 
 for(ll i = 1 ; i <v.size() ; i++){
     result = __gcd(result , v[i]);
 }
 
 
   cout << result<< "\n";
       
     
       
       
    }
}