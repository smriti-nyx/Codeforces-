#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
        ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        
        int x;
        cin>>x;
        
        int countdigits(ll);
        if(x==0) return 1;
        int cnt = 0 ;
        while(x>0){
            x /= 10 ;
            cnt ++; 
        }
        
    ll p =1 ;
    for(int i = 0 ; i<cnt ; i++) p*= 10;
    cout<<p+1<<"\n";
    }
}