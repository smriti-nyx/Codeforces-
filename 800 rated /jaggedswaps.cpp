#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
        ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--){
        
        int n ;
        cin>>n;
        
        vector<int>a(n);
        for(int i = 0 ; i <n ; i++){
            cin>>a[i];
        }
        
        
        vector<int> sorted = a;
        sort(sorted.begin(), sorted.end());
        
        bool swapped = true;
        
        while(swapped){ //loop when true
            swapped = false;   //set it to false 
             for(int i =1; i<n -1; i++){. //keep looping
            if( a[i-1] < a[i] && a[i]> a[i+1]){
                swap(a[i+1],a[i]);  //swap happened
                swapped = true ; //so condition is true , we loop again.
            }
        }
        }
       
        
        if(a == sorted){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
        
        
        
        
        
        
        
        
        
    }
}
