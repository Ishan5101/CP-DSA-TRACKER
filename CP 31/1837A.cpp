#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
       int x,k;
       cin>>x>>k;

       if(x%k!=0){
        cout<<"1"<<" ";
        cout<<endl;
        cout<<x<<endl;
       }
       if(x%k==0){
        cout<<"2"<<" ";
        cout<<endl;
        cout<<x-1<<" "<<"1"<<" "<<endl;
       }
    }
    return 0;
}
 
