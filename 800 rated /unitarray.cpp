
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    
    while(t--){
       
       int n ;
       cin>>n ;
       vector<int> a(n);
       for(int i = 0 ; i <n ; i++){
           cin>>a[i];
       }
       int op = 0;
       int sum = 0  ; 
       int pr = 1 ;
     for(int i = 0 ; i <n ; i++){
          sum += a[i];
        pr *= a[i];
     }
     
     while(pr !=1 || sum <0){
         for(int i = 0; i<n ; i++){
             if(a[i] == (-1)){
                 pr *= (-1);
                 a[i] = 1;
                 sum += 2;
                 
                 op ++;
                 break;
             }
         }
     }
      
       
       cout<<op<<"\n";
                
       
    }
}