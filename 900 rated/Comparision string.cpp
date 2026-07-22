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
        
        vector<char> s(n);
        for(ll i = 0 ; i<s.size(); i++){
            cin>>s[i];
        }
        
       
        
        
        ll curl = 0 ; 
        ll curr = 0 ;
        ll bestl = 0 ; 
        ll bestr  = 0;

        for(ll i = 0 ; i <s.size() ; i++){
            if(s[i] == '>'){
                curl ++ ; 
                bestl = max(bestl , curl);
                curr = 0 ;
            }else if(s[i] == '<'){
                curr ++;
                bestr = max(bestr , curr);
                curl = 0 ;
            }
        }
        
      
     

 ll result = max(bestl , bestr) +1 ; 

   cout << result << "\n";
       
     
       
       
    }
}