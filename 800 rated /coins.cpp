#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     long long t ;
     cin >> t ;
     while (t--)
     {
        int n , k ;
        cin >> n >> k ;
        // assert(k >= 1 && k <= n) && k != 2);
         // Assert the required constraints
        assert(k >= 1 && k <= n && n <= 1000000000000000000LL);  // n ≤ 10¹⁸
        assert(k != 2);                                          // k ≠ 2


         
         bool condition_met = true;
         
         //   2*x + k*y = n
         for(int i = 0; i <n/2 ; i++){
             if( 2* i + k  == n);
             condition_met = true;
            
         } 
        
         
         
         if(condition_met = true ){
             cout<<"Yes \n"; } 
             else {
             cout<<"No\n";
         }
       
        

     



     }
     
    return 0;
}




