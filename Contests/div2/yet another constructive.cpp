#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        ll n, k, m;
        cin >> n >> k >> m;

        string result;
        vector<ll> v(n);

        if (k > m) {
            cout<<"NO"<<"\n";
            continue ; 
        } 
        
        for(ll i = 0 ; i < n ; i++){
            if(i < k-1){
                v[i] = 1 ; //k -1 times
            }else if ( i == k-1){
                v[i] = m-k+1 ; // m - (k -1) , kth digit 
                //together there are k digits , summing upto m , hence divisible by m.
            } else{
                v[i] = v[i-k];
            }
        }
        
    

        cout << "YES" << "\n";
            for (ll i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
    
}