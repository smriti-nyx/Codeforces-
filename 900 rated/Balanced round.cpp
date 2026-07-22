#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
 
    while (t--){
        ll n , k ;
        cin>>n>>k ;
        
        vector<int> v(n);
        for(ll i = 0 ; i<v.size(); i++){
            cin>>v[i];
        }
        
        sort(v.begin(), v.end());
        
        ll best =  0 ; 
        ll count = 0;
        //ll best = 0 ; 
        vector<ll> a;
        
       for(ll i = 0 ; i <v.size() -1; i++){
           ll diff = abs(v[i+1] - v[i]);
           a.push_back(diff) ; 
       }
         for(ll i = 0 ; i<a.size() ; i++){
             if(a[i]<= k ){
                 count++;
                 best = max(count , best);
             }else{
                 count = 0;
             }
         }
      
       
       if(a.empty()){
           cout<<0<<"\n";
       }else{
                  cout<<n- best -1<<"\n";

       }
       
       
    }
}