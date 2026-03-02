#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        assert(1 <= n * m && n * m <= 25);
 
        int cnt = 0;
 
 
        while (x.size() < s.size()) {
            x += x;
            cnt++;
        }
 
 
        if (x.find(s) != string::npos) {
            cout << cnt << "\n";
        } else {
            
            x += x;
            cnt++;
 
            if (x.find(s) != string::npos)
                cout << cnt << "\n";
            else
                cout << -1 << "\n";
        }
    }
 
    return 0;
}