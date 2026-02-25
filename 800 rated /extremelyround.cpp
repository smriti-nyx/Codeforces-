#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long power = 1;
        long long tempnum = n;

        while(tempnum >= 10){
            tempnum /= 10;
            power *= 10;
        }

        vector<long long> v;

        int mult = 0;

        for(long long i = 1; i <= power; i *= 10){
            for (int j = 1; j <= 9 ; j++){
                mult = i * j;
                if(mult > n){
                    break;
                }
                                 v.push_back(mult);
            }
           
        }

        long long result = v.size();

        if(n <= 9){
            cout << n << "\n";
        }
        else{
            cout << result << "\n";
        }
    }

    return 0;
}