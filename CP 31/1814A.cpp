#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() {
 
   int t;
   cin>>t;
   while(t--){
      int n,k;
   cin>>n>>k;
        if(n%2==0 || (n-k)%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
   }
   return 0;
}
