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
        cin>>n ;
        
        string s ;
        cin>>s;
        int len = 0;
        
        
        
        for (int i = 0; i < n; i++) {

    if (n == 2) {
        if (s[0] == s[1]) {
            len = 2;
        } else {
            len = 0;
        }
        break;  
    }

    else if (n == 3) {
        if (s[0] == s[2]) {
            len = 3;
        } else {
            len = 1;
        }
        break;  
    }

    else {
        if (s[i] != s[n - 1 - i]) {
            continue;
        } 
        else {
            len = n - 2 * i;
            break;
        }
    }
}
        
        
        cout<<len<<"\n";
        
        
    }
}
