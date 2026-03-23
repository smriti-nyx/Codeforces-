#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    
    while (t--) {
        
        int n = 10, m = 10;
        vector<vector<char>> mat(10, vector<char>(10));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> mat[i][j];
            }
        }
        
        int score = 0;
        
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                
                if(mat[i][j] == 'X'){
                    
                    if(i <= 4){
                        if(i > j){
                            score += j + 1;
                        }
                        else if(j >= 9 - i){
                            score += (10 - j);
                        }
                        else{
                            score += i + 1;
                        }
                    }
                    else{
                        if((9 - i <= j) && (j <= i)){
                            score += 10 - i;
                        }
                        else if(j < 9 - i){
                            score += j+1;
                        }
                        else{
                            score += 10 - j;
                        }
                    }
                }
            }
        }
        
        cout << score << "\n";
    }
}
