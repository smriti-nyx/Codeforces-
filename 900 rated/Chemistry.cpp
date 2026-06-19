
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        
        int n , k ;
        cin>>n>>k;
        
        string s;
        cin>>s;
        
       string result = " ";
        
        int freq2[26] = {0} ;
        for( char c :s) freq2[c -'a']++;
        
        int oddcount = 0 ;
        for(int i = 0 ; i <26 ; i++){
           if(freq2[i]%2 != 0 ) oddcount ++;
        }
        if(k>= oddcount -1){
            result = "YES";
        }else{
            result = "NO";
        }
        
        
        
        
        cout<<result<<"\n";
        
        
        
        
        
        
        
        
        
        
        
        
        
    }

}
    