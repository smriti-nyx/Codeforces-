#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
   
        
        int n ;
        cin>>n ;
        
        vector<int>v(n);
         for(int i = 0 ; i<n ;i++){
            cin>>v[i];
        }
        
        int num = v[0];
        for(int x : v){   //for(int i = 0 ; i <n; i++){
         if(abs(x)< abs(num)){
         num = x ;
         }

        }
    
        

        
                cout<<abs(num)<<"\n";
                
        
    
    
    
    
}