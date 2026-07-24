#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
 
    while (t--){
        ll n ,q;
        cin>>n>>q;
        
        vector<ll> a(n);
        for(ll i = 0 ; i<a.size(); i++){
            cin>>a[i];
            
        }
        
        
        vector <ll> prefixsum(n+1 , 0); //(size , initial value of the terms)
        for(int i = 0 ; i <n ; i++){
            prefixsum[i+1] = prefixsum[i] +a[i];
        }
        
        ll totalsum = prefixsum[n];
       
      while(q--){
          ll l , r , k; 
          cin>>l>>r>>k;
           ll rangesum = prefixsum[r] - prefixsum[l-1] ;
           ll count = r - l+1 ; 
                  ll sum = totalsum - rangesum + count*k ; 
              
          
          
          string result = ( sum%2 == 0)? "NO" :"YES";
          cout<<result<<"\n";
          
      }
      
   
 

       
     
       
       
    }
}