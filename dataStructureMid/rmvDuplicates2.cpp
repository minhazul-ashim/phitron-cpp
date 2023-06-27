#include<bits/stdc++.h>
using namespace std;

int main () {
    list<int> ll;
    while(true) {
        int val;
        cin >> val;
        if(val == -1) {
            break;
        };
        ll.push_back(val);
    }
    ll.sort();
    ll.unique();
    for (auto it = ll.begin(); it != ll.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}