#include<bits/stdc++.h>
using namespace std;

int main () {
    queue<string> q;
    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        int cmd;
        cin >> cmd;
        if(cmd == 0) {
            string person;
            cin >> person;
            q.push(person);
        } else if(cmd == 1 && q.empty()) {
            cout << "Invalid" << endl;
        } else {
            cout << q.front() << endl;
            q.pop();
        }
        cin.ignore();
    }
    return 0;
}