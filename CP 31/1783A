#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
    int t;
    cin >> t;  
    while (t--) {
       long long n;
        cin>>n;

      vector<long> b(n);
      for(int i=0;i<n;i++){
        cin>>b[i];
      }
      sort(b.begin(),b.end());
      int maxi=b[n];
      int min=b[0];
      if(maxi == min){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;
        cout<<maxi<<" ";
        for(int i=0;i<n-1;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
      }
}

 }
