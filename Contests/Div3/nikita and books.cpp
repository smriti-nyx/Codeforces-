#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
 
    while (t--){
        int n ;
        cin>>n ;
        
        vector<ll> v(n);
        for(auto& x :v) cin>>x ;
        
        ll prefixsum = 0 ;
        bool ok = true ;
        
        
        for(int i = 0 ; i < n ; i++){
            prefixsum += v[i] ; 
            ll need = (ll)(i+1) * (i+2) /2 ; 
            if(prefixsum < need){
                ok = false;
            }
        }
        
        cout<<(ok ? "yes" :"no")<<"\n";
        
        
       
        
        
    }
}