#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {                           // { main
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {                      // { while
        int n, k;
        cin >> n >> k;

        // constraints
        assert(k >= 1 && k <= n && n <= 1000000000000000000LL);
        assert(k != 2);

        bool condition_met = false;

        // 2*x + k*y = n
        for (int i = 0; i <= n; i++) {          // { outer for
            for (int j = 0; j <= n; j++) {      // { inner for
                if (2 * i + k * j == n || 2* i == n || k* j == n) {
                    condition_met = true;
                    break;
                }                              // } if
            }                                  // } inner for
            if (condition_met) break;
        }                                      // } outer for

        if (condition_met == true) {           // { if
            cout << "Yes\n";
        } else {                               // { else
            cout << "No\n";
        }                                      // } if/else
    }                                          // } while

    return 0;
}                                              