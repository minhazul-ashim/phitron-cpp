#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    cin.ignore();
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
            cin >> v1[i];
    }
    int x;
    cin >> x;
    cin.ignore();
    vector<int> v2(x);
    for (int i = 0; i < x; i++) {
            cin >> v2[i];
    }
    int y;
    cin >> y;
    v1.insert(v1.begin() + y, v2.begin(), v2.end());
    for(int a : v1) {
            cout << a << " ";
    }
    return 0;
}