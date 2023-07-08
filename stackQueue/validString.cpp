#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {  
        queue<char> q;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if(q.empty()) {
                q.push(s[i]);
                continue;
            }
            char top = q.front();
            if(top != s[i]) {
                q.pop();
            } else {
                q.push(s[i]);
            }
        }
        if(q.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        cin.ignore();
    }
    return 0;
}