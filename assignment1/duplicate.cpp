#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    cin.ignore();
    vector<int> v(n);
    for (int i = 0; i < n;i++) {
            cin >> v[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if(v[i] == v[j]) {
                    flag = true;
                    break;
                }
            }
            if(flag == true) {
                cout << "YES";
                return 0;
            }
    }
    cout << "NO";
    return 0;
}