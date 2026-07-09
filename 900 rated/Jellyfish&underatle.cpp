#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--) {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll sum = 0;
        ll result = 0;

        for (int i = 0; i < (int)v.size(); i++) {
            sum += min(v[i], a - 1);
        }

        result = b + sum;

        cout << result << "\n";
    }
}