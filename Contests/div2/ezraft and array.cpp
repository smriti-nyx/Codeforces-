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
        
        vector<ll>v(n);
        ll p = 6;
        
        if(n ==1){
            cout<< 1<<"\n";
        }else if(n ==2){
            cout<<-1<<"\n";
        }else{
            v = {1 ,2,3};
            for(int i = 1 ; i<n-2 ; i++){
                
                v.push_back(p);
                p *= 2;
               
                }
                  for(int i = 0 ; i<n ; i++){
                    cout<<v[i]<<" ";
            }
            cout<<"\n";
        }
        
        
    }
}