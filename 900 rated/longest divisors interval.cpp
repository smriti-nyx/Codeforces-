#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> v;
        ll count = 0;

        for (ll i = 1; i <=  50; i++) {
            if (n % i == 0) {
                count++;
            } else {
                if (count > 0) {
                    v.push_back(count);
                    count = 0;
                }
            }
        }

        if (count > 0) {
            v.push_back(count);
        }

        if (!v.empty()) {
            cout << *max_element(v.begin(), v.end()) << "\n";
        } else {
            cout << 1 << "\n";
        }
    }

    return 0;
}