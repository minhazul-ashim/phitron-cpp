#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        int mx = 0;
        int num;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            if(mp.count(x) && mp[x] == mx && x > num) {
                num = x;
            } else if(mp.count(x) && mp[x] > mx) {
                mx++;
                num = x;
            }
        }
        cout << num << " " << mx << endl;
    }
    return 0; 
}