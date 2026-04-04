#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
 
int main() {
ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
 
    while(t--){
        int n ;
        cin>>n;
        int cnt =0;
        
        vector<int>a(n);
        for(int i = 0 ; i <n ; i++){
            cin>>a[i];
        }
        
        for(int i = 0 ; i < n -1;i++){
            if((a[i]+a[i+1] ) %2 != 0 ){
                continue;
            }
            else{
                cnt++;
            }
            
        }
        cout<<cnt<<"\n";
        
        
        
        
        
        
    }
 
}
