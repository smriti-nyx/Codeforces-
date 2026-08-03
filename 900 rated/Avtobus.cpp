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
        ll x = 0 ;  //minm, div by 6 
        ll y= 0 ;   //maxm , div by 4
       


        if(n%2!= 0|| n <4){
            cout<<-1<<"\n";
            continue ;
        }

        ll minAns = -1;

        for(ll x= n ; x>= 0 ; x-- ){
            if(x%6 == 0 && (n-x) %4 == 0 ){
                minAns =  x/6 + (n-x) / 4 ; 
                break ; 
            }
        }

        ll maxAns = -1 ; 

         for(ll x= n ; x>=0; x-- ){
            if(x%4 == 0 && (n-x) %6 == 0 ){
                maxAns =  x/4 + (n-x) / 6; 
                break ; 
            }
        }
         
        if (minAns == -1 || maxAns == -1){
             cout << -1 << '\n';
        }
           
        else{
            
        
            cout << minAns << " " << maxAns << '\n';
    }



  

     
   

   
       
     
     
       
    }
}