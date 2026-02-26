#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
    while(t--){
        
        //action 1 
        //action 2 
        int n ; ///no of cells
        cin>>n;
        
        
        string s ; //the string 
        cin>>s ;
        
        int cntact1 = 0; // no of 3 consecutive dots 
        int cnt = 0; // no of single and double dots 
        int act1 = 0;
        
        
        for(int i = 0 ; i <=n-1 ; i ++){
             if(s[i] == '#'){
            continue ;
             }
            if(s[i] == '.' && s[i+1]== '.' && s[i+2] == '.'){
              //  cnt++;
              //  if(cnt == 3 ){
                    act1 = 2 ;
                    break;
                }
           
           else {
              cnt++;
              act1 = cnt ;
            }
         

        }
        
        cout<<act1<<"\n";
        
        
        
        
        
        
        
        
        
    }

    return 0 ;
}
