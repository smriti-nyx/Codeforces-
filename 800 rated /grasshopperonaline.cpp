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

//array defined 
/*
vector<int> v;
for(int i = 0 ; i <= x ; i ++){
    v.push_back(i);
      }
      
      
      
      
      //removing elements divisible by k 
      v.erase(
    remove_if(v.begin(), v.end(),
        [k, x](int value) {
            return (value % k == 0) && (value != x) && (value != 0);
        }),
    v.end()
);
 int maximum = *max_element(v.begin(), v.end());
 */




 
 if(x<k){
     cout<<1<<"\n";
     cout<<x <<"\n";
 }
 
 
 
 else if (x == k){
     cout<<2<< "\n";
     cout<<x<< " "<< x<<"\n";
     
 }
 else{
     if(x> k && x%k != 0){
         cout<<1<<"\n";
         cout<<x<<"\n";
     }
     else if ( x>k && k == 2) {
         int result = x -3;
         cout<<2<<"\n";
         cout<< result<< " "<<3<<"\n";
     }
        else{
            cout<<2<<"\n";
            int res = x - 2 ;
            cout<<2<<"\n";
            cout<< x - res << "  "<<2<<"\n";
        }
       


 }
 
 
    
    
    
    
    
    
  }  
    
    
    return 0 ;
}