#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
            int n;
            cin >> n;
            cin.ignore();
            vector <int> v(n);
            for (int i = 0; i < n; i++) {
                cin >> v[i];
            }
            bool flag = true;
            for (int i = 0; i < n - 1; i++) {
                if(v[i] > v[i+1]) {
                    flag = false;
                    cout << "NO" << endl;
                    break;
                }
            }
            if(flag) {
                cout << "YES" << endl;
            }
            
    }
    return 0;
}