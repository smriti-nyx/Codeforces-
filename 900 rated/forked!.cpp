#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        long long a, b;
        long long xk, yk, xq, yq;
        
        cin >> a >> b >> xk >> yk >> xq >> yq;
        
        long long da[] = {a, a, -a, -a, b, b, -b, -b};
        long long db[] = {b, -b, b, -b, a, -a, a, -a};
        
        set<pair<long long,long long>> setK, setQ;
        
        for(int i = 0; i < 8; i++){
            setK.insert({xk - da[i], yk - db[i]});
            setQ.insert({xq - da[i], yq - db[i]});
        }
        
        int count = 0;
        for (auto p : setK){
            if (setQ.count(p)) count++;
        }
        cout << count << "\n";
    }
}