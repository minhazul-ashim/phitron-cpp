#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        stack<char>s;
        int n;
        cin >> n;
        cin.ignore();
        string st;
        cin >> st;
        cin.ignore();
        for (int i = 0; i < n; i++) {
            char a = st[i];
            if(s.empty()) {
                s.push(a);
                continue;
            }
            if(a == 'R' && s.top() == 'B' || s.top() == 'R' && a == 'B') {
                a = 'P';
            } else if(a == 'R' && s.top() == 'G' || s.top() == 'R' && a == 'G') {
                a = 'Y';
            } else if(a == 'B' && s.top() == 'G' || s.top() == 'B' && a == 'G') {
                a = 'C';
            } else if(a == s.top()) {
                s.pop();
                continue;
            } else if(a != s.top()) {
                s.push(a);
                continue;
            }
            s.pop();
            if(!s.empty() && s.top() == a) {
                s.pop();
            } else {
                s.push(a);
            }
        }
        
        stack<char> s2;
        while(!s.empty()) {
            s2.push(s.top());
            s.pop();
        }

        while(!s2.empty()) {
            cout << s2.top();
            s2.pop();
        }
        cout << endl;
    }
    return 0;
}