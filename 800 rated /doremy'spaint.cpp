
       
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
        string result = " ";
        
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // defining a set 
        set<int> s(a.begin(), a.end());
        int half = n / 2;
        
        // if all same 
        if(s.size() == 1){ 
            result = "Yes";   
        }
        else{
            if (n == 2){ // if all not same
                result = "Yes";
            }
            else if (n == 3){
                result = (s.size() < 3 ? "Yes" : "No");
            }
        
              else if(n % 2 == 0){ // even no. of terms 
    if(s.size() == 2){
        int x = *s.begin();
        int y = *next(s.begin());

        int cx = count(a.begin(), a.end(), x);
        int cy = n - cx;

        result = (cx == cy ? "Yes" : "No");
    } else {
        result = "No";
    }
}
            
            else if (n % 2 != 0){ // odd no. of terms 
                if(s.size() == 2){
                    int x = *s.begin();
                    int y = *next(s.begin());

                    int cx = count(a.begin(), a.end(), x);
                    int cy = n - cx;

                    result = (abs(cx - cy) == 1 ? "Yes" : "No");
                } else {
                    result = "No";
                }
            }
        }

        cout << result << "\n";  
    }

    return 0;
}