
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> ones;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1)
            ones.push_back(i);
    }

    // edge case: fewer than 2 ones
    if (ones.size() < 2) {
        cout << 0;
        return 0;
    }

    int maxDiff = 0;
    for (int i = 1; i < ones.size(); i++) {
        maxDiff = max(maxDiff, (ones[i] - ones[i - 1]-1));
    }

    cout << maxDiff;
}
