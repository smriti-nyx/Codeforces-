#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
    while(t--){
        
        int n ;
        cin>> n ;
        
        for(int i = 0 ; i <=10 ; i++){
            if(( n + i) % 3 != 0 && (n-i) % 3 != 0){
                cout<<"First"<<"\n";
                break;
            }
            else{
                cout<<"Second"<<"\n";
                break;
            }
        }