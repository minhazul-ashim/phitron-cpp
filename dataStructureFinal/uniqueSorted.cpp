#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int n;
        set<int> s;
        cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        vector<int> v;
        for (auto it = s.begin(); it != s.end(); it++) {
            v.push_back(*it);
        }
        reverse(v.begin(), v.end());
        for(int y : v) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}