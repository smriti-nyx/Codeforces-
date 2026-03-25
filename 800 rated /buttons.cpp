#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main() {
	    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        
        int a, b , c ;
        cin>>a>>b>>c;
        
        if( a ==b ){
            if(c%2 != 0){
           cout<<"First\n";
            }
            else{
                cout<<"Second\n";
            }

        }
        else if (a >b ){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
        
        
        
        
        
    }

}
