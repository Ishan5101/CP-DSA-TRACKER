#include <bits/stdc++.h>
using namespace std;

void ishan(vector<int>& v, int n, int &count1, int &count2) {
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 1) count1++;
        if (v[i] == -1) count2++;
    }
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int count1, count2;
        ishan(v, n, count1, count2);
        int opt=0;
        while (count1< count2 || count2%2!=0) {
            opt++;
            count1++;
            count2--;
        } 
        cout<<opt<<" "<<endl;
    }

    return 0;
}
