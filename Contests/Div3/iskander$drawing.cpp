#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int longestchain(const string& s , char target){
    int bestlen = 0 ;
int curlen = 0 ;
for(char c :s){
    if(c == target){
        curlen++ ;
        bestlen = max(bestlen , curlen);
    }else{
        curlen = 0 ;
    }
}
    return bestlen ;
    
}


 
int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
 
    while (t--){
        int n ;
        cin>>n ;
        
        
        string s ;
        cin>>s ;
        
        
        
    int len = longestchain(s ,'#');
    if(len%2 == 0 || len == 0){
        len = len/2 ; 
    }else{
        len = len/2 +1 ; 
    }
        
        
        cout<<len<<"\n";
        
        
    }
}