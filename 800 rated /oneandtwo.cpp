#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--){
        
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int cnt2 = 0;
        int req2;
        int indexx;
        int final2;
        vector<int> two;
        
        
        for(int i = 0; i < n; i++){
            if(a[i] == 2){
                cnt2++;
                two.push_back(i);
            }
        }
        
        
        if(cnt2 == 0){
            final2 = 1;
        }
        else if(cnt2 % 2 != 0){
            final2 = -1;
        }
        else{
            req2 = cnt2 / 2;
            indexx = req2 - 1;
            final2 = two[indexx] + 1;
        }

        cout << final2 << "\n";
    }
}