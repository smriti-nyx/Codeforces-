#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        assert(n >= 2 && n <= 100);

        vector<int> a(n);
        for(int i = 0; i < a.size(); i++){
            cin >> a[i];
        }
        
        bool allSame = true;

for(int i = 1; i < n; i++){
    if(a[i] != a[0]){
        allSame = false;
        break;
    }
}

if(allSame){
    cout << -1 << "\n";
    continue;
}


        int k ;
          k = (n+1)/2;
          
          //copying the og vector a and then sorting it 
          vector<int> sorted = a ;
          sort(sorted.begin() , sorted.end());
          
          
          //picking the largest k elements .
                  vector<int> b ,c ;
                  unordered_map<int , int> freq;
                  
                  //storing the largest elements after skipping k elements into diff containers.
                  
                  for(int i = n-k ; i <n ; i++){
                      freq[sorted[i]]++;
                  }
                  
                  
                  
                  //distributing them into right containers
                  for(int x:a){
                      if(freq[x] >0){
                          c.push_back(x);
                          freq[x]--;
                      }
                      
                      else{
                          b.push_back(x);
                      }
                  }
                  
                  cout<<b.size()<<" "<<c.size()<<"\n";
                  
                  
                  for(int x:b){
                      cout<<x<<" ";
                  }
                  cout<<"\n";
                  
                  
                  for(int x:c ){
                      cout<<x<<" ";
                  }
                  
                  
          
    
    
        
    }
}