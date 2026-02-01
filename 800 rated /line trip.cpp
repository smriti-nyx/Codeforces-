#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long t ;
  cin>>t;
  while(t--){

    int n ; // no of gas stations 
     int x; //extreme point 
    cin >> n >> x; // variable reading. tip: cant use assert before ereading .


    
    assert(n >= 1 && n <= 50);
    assert(x >= 2 && x <= 100);

   



    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    // add x at the end
    a.push_back(x);

    
    int ans = a[0];  // gap from 0 to first station

    // gaps between stations
    for (int i = 1; i < n; i++) {
        ans = max(ans, a[i] - a[i - 1]);
    }

    // last gap (need to go and come back)
    ans = max(ans, 2 * (x - a[n - 1]));

    // print it
    cout << ans << "\n";
    
    

    





    

     
    }



  

  return 0;
}