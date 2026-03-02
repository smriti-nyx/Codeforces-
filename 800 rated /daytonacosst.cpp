#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        int n , k ;
        cin>>n>>k;
        
        
        vector<int> a(n);
        for(int i = 0 ; i < n; i ++){
            cin>>a[i];
        }
        
        string result = " ";
        
        for(int i = 0 ; i<n ; i ++){
            if(a[i] == k){
               result = "YES";
               break ;
            }
            else{
               result = "NO";
            }

        }
        
        cout<<result<<"\n";
        
        
    }

    return 0;
}