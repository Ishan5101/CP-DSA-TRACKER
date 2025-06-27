#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
       int n;
       cin>>n;
       int count=0;
       int flag=0;
       vector<int >v(n);
       
       for(int i=0;i<n;i++){
        cin>>v[i];

        if(v[i]==0){
            count++;
            flag=max(flag,count);
        }else{
            count=0;
        }

       }
       cout<<flag<<endl;
    }

    return 0;
}
