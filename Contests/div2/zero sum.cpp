#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        
        
        int n ;
        cin>> n ; 
        
        vector<int>v(n);
        for(int i = 0 ; i <n ; i++){
            cin>>v[i];
        }
        ll sum = 0; 
        
        for(int i = 0 ; i<v.size() ; i++){
            sum += v[i];
        }
        
        
        string result = " ";
        
        ll r = abs(sum%4) ; 
        
        result = (r == 0 ) ? "YES" : "NO";
        
        cout<<result<<"\n";
        
    }
}
