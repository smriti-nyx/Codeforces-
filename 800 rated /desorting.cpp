#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        
        vector<int> v = a;
        sort(v.begin(), v.end());  
        
        vector<int> d;
        int result;
        
        if(v == a){
            for(int i = 0; i < n-1; i++){
                int difference = abs(a[i] - a[i+1]);
                d.push_back(difference);
            }
            int r = *min_element(d.begin(), d.end());
            if(r != 2){
                result = r/2 + 1;
            }
            else{
                result = 2;
            }
        }
        else{
            result = 0;   
        }
        
        cout << result << "\n";
    }
}