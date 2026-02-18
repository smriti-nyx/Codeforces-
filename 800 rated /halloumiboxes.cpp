#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;


int main(){
   ios::sync_with_stdio(false);
    cin.tie(nullptr);
     long long t ;
     cin >> t ;
     while (t--){
         int n , k ;       //variable input taken 
         cin>>n>>k;

          vector <int> a(n);      //array input using vector 
          for(int i = 0 ; i <n; i++){
              cin>>a[i];
          }


           bool sorted = true;
           
           
           
          for(int i = 0; i <n-1  ; i ++){
              if(a[i] > a[i+1]){
                  sorted = false;
                  break;
                }
              }
              
            if(sorted) cout<<"YES\n";
            else cout<<"NO\n";





















     }
}

