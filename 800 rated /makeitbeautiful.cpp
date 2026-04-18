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
        int sum = 0;
        
      vector<int>a(n);
      for(int i= 0 ; i<n ; i ++){
          cin>>a[i];
      }
      string result = " ";
     sort(a.begin() , a.end());
     int max = a[n-1];
     int min = a[0];
     
     if(max == min){
         result = "No";
     }
     else{
         result= "Yes";
     }
     
     if (result == "Yes"){
         cout<<result<<"\n";
         cout<<max<<" ";
         for(int i = 0 ; i<n -1; i++){
             cout<<a[i]<<" ";
         }
     }
     else{
         cout<<result;
     }
        
        
        cout<<"\n";

        
       
    }
}