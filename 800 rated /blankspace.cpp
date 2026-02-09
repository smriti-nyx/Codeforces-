#include<bits/stdc++.h>
using namespace std ;

int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
     long long t ;
     cin >> t ;
     while (t--)
     {
    
    int n ;
     cin>>n ; 
     
     vector <int> a(n);
     for(int i = 0; i<n ; i++){
         cin>>a[i];
     }
     int max_count = 0;
     int current_count  = 0;
     
     int*ptr = a.data();
     
     
     for(int i = 0; i< n ; i++){
         if(*ptr == 0){
             current_count++;
             max_count = max(max_count , current_count);
         }
         else{
             current_count = 0;
         }
         ptr ++;
     }
    cout<<max_count<<"\n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     }
    
    return 0;
    
}