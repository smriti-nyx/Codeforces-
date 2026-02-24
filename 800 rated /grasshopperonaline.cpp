#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;



int main(){
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long t ;
  cin>>t;
  while(t--){
  
  
 //inputs taken 
int x ,k ;
cin>>x>>k ;


//values asserted
assert(x >= 1 && x <= 100);
assert(k >= 2 && k <= 100);


      
      
      
if(x%k != 0){
    cout<<1<<"\n";
    cout<<x<<"\n";
}
 else {
     if ( k ==2){
         cout<< 2<<"\n";
         cout<< 3<< " "<< x-3<<"\n";
     }
     else{
         cout<<2<<"\n";
         cout<<x -1 <<" "<< 1 <<"\n";
     }
 }



 

 
    
    
    
    
    
    
  }  
    
    
    return 0 ;
}