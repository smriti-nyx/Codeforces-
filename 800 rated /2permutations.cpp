#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    
    while(t--){
        int n, a, b;
        cin >> n>>a>>b;
        string result = " ";
        int r = n-2;
        
        if(n ==a &&  a ==b){
                   result = "Yes " ; 
        }
        else if(n>1 ){
            if(a+b <=  r){
                result = "Yes";
            }
            else{
                result = "No";
            }
        }
        cout<<result<<"\n";
        
       
    }
}