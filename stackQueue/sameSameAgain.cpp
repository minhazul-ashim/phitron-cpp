#include<bits/stdc++.h>
using namespace std;

int main () {
    stack<int> s;
    queue<int> q;
    int n, m;
    cin >> n;
    cin >> m;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.push(val);
    }
    cin.ignore();
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    };
    bool flag = true;
    if(n != m) {
        flag = false;
        cout << "NO" << endl;
        return 0;
    }
    list<int> l1;
    list<int> l2;
    while(!s.empty()) {
        l1.push_back(s.top());
        s.pop();
    }
    while(!q.empty()) {
        l2.push_back(q.front());
        q.pop();
    }
    if(l1 == l2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}