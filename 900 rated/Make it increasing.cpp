#include <bits/stdc++.h>
using namespace std;
using ll = long long;

 ll make_strictly_increasing(vector<ll>& a){
     ll n = a.size() ; 
     int count = 0 ;
     for(ll  i = n-2 ;  i>= 0 ; i--){
         while(a[i] >= a[i+1]){
             if(a[i] == 0) return -1 ; 
             a[i] /=2 ; 
             count ++ ; 
         }
     }
     return count ;
 }

int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
 
    while (t--){
        ll n ;
        cin>>n;

        vector<ll> a(n) ; 
        for(ll i = 0 ; i <n ; i++){
            cin>>a[i] ; 
        }

     
         int result = make_strictly_increasing(a);

        cout<<result<<"\n"; 
      



  

     
   

   
       
     
     
       
    }
}