#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        vector<int> result;
        
        for(int i = 0; i < (int)a.size()-1; i++){
            result.push_back(a[i]);
            if(a[i] > a[i+1]){
                int smaller = a[i+1];
                if(smaller == 1){
                    result.push_back(1);  
                } else {
                    result.push_back(smaller - 1);
                }
            }
            
        }
        result.push_back(a[n-1]);  
        
        cout << result.size() << "\n";
        for(int i = 0; i < (int)result.size(); i++){
            cout << result[i] << " ";
        }
        cout << "\n";
    }
}