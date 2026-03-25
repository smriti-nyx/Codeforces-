#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main() {
 //E+O = O, E+E =E, O+O = E 
  ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        
        int n ;
        cin>>n ;
        
        assert(n>=1 && n<=50);
        
        vector<int>a(n);
        for(int i = 0; i< n ; i++){
            cin>>a[i]; 
        }
        
        
        int sum = 0;
        
        for(int i = 0; i<n ; i++){
            sum += a[i];
        }
        
        if(sum%2 ==0){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        
        
        
    }
}
