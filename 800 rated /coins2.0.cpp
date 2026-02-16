/*#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int gcd ( int a , int b){
    if( b == 0) return a ;
   // gcd(a, b) = gcd(b, a % b)

if ( a%b == 0 ) return b ;

return gcd(b ,  a%b  );
} 




 int main() {
      ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {                      // { while
        int n, k;
        cin >> n >> k;
        assert(k!= 2);
        gcd( 2 , k);
        
        if(k%2 ==0 && n%2 == 0){
            cout<<"YES \n";
            
        }
        else if  (k%2 != 0 && n%gcd(2,k) == 0){
            cout<<"YES \n";
        }
        else if ( (n - k)%2 ==0){
            cout<<"YES\n";
        }
        
        else{
            cout<<"NO \n";
        }

        
        
        
        
      /* 2 * x + k * y = n 
      k = even , n = even 
      */
      
      
      
     
     
     
     
     
     
     
     
     
     
     
     
     
   #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t; 
    while (t--) 
    {
        long long n, k; 
        cin >> n >> k; 
        
        if (n % 2 == 0 || (n - k) % 2 == 0) 
            cout << "YES" << endl; 

        else
            cout << "NO" << endl; 
    }
    return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)