#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 1;
    int mid = n / 2 + 1;
    int z = n / 2;
    while(x <= n) {
    for (int j = 1; j <= n; j++) {
        if(x == mid && j == mid) {
            cout << "X";
        } else if(j == (mid-z)) {
            cout << "\\";
        } else if(j == (mid+z)) {
            cout << "/";
        } else  {
            cout << " ";
        }
    }
    cout << endl;
    z--;
    x++;
    }
    return 0;
}