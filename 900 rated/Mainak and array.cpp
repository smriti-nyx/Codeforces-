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
        
        vector<ll> a(n);
        for(ll i = 0 ; i<a.size(); i++){
            cin>>a[i];  }
        
     ll diff = a[n-1] -a[0] ; 
     for(ll i = 1; i <n ; i++){
         diff = max(diff , a[i] - a[0]);
     }
     
     for(ll i = 0 ; i <n-1 ; i++){
         diff = max(diff , a[n-1] - a[i]);
     }
     
     for(ll i = 0 ; i <n-1 ;   i++){
         diff = max(diff , a[i] - a[i+1]);
     }
      
   
   cout<<diff<<"\n";

       
     
       
       
    }
}