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
        
       
        
        
        ll count = 1;
        
        vector<ll> a ; 
       for(ll i = 0 ; i <s.size() ; i++){
          // a.push_back(1);
          if(s[i] == '>'){
              count = count-1 ; 
              a.push_back(count);
          } else if (s[i]=='<'){
              count += 1 ;
              a.push_back(count);
          }
        
       }
        a.push_back(1);
        
      sort(a.begin(), a.end());

 ll distinct = unique(a.begin(), a.end()) - a.begin();

   cout << distinct << "\n";
       
     
       
       
    }
}