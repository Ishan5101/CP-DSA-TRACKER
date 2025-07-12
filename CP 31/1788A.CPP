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
      int count =0;
      
      for(int i=0;i<n;i++){
        if(b[i]==2){
            count++;
        }
      }
      if(count%2!=0){
        cout<<-1<<endl;
      }else{

        int k=-1;
        int current_two=0;
        for(int i=0;i<n;i++){
            if(b[i]==2){
            current_two++;
        }

            if(current_two==count/2){
                k=i+1;
            }
        }
         cout<<k<<endl;
      }
     
}
cout << endl;
 }
