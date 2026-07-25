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
        
        
       ll x = *min_element(a.begin() , a.end());
       ll y = *max_element(a.begin() , a.end()) ; 
       int i = max_element(a.begin(), a.end()) - a.begin();
       
       ll diff = 0 ; 
       if(x == a[0]){
           diff = y -x ;
       }else if(x!= a[0]){
           ll diff1 = y - a[i+1];
           ll diff2 = y-a[0] ;
           ll diff3 = y - a[i-1];
           ll diff4 = y-x;
           

           diff = max({diff1 , diff2 , diff3 ,diff4});
       }
      
   
   cout<<diff<<"\n";

       
     
       
       
    }
}