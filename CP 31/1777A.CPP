#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
       int n;
       cin>>n;
       int count=0;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin >> v[i];
       }
       
       for(int i=0;i<n-1;i++){
            if((v[i]%2)==(v[i+1]%2)){
                count++;
            }
    }
    cout<<count<<" "<<endl;
       
      }

}     

 
