#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int moves;
        int xmoves;
       // int diff2;
        int ymoves = abs(y2 - y1);
        int xmid;

        if (y1 == y2) {
            if(x1>= x2){
                moves = abs(x2 - x1);
            }
            else{
                moves =-1;
            }
            
        }
        else if(y1 <y2) {
            
        
                xmid = x1+ymoves;
                xmoves = abs(xmid -x2);
                if(xmid >= x2){
                    moves = xmoves +ymoves;
                }
                else{
                    moves = -1;
                }
            
           
        }
        else{
            moves = -1;
        }

        cout << moves << "\n";
    }

    return 0;
}
