#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        map<string, int> mp;
        string result;
        int mx = 0;
        while(ss >> word) {
            mp[word]++;
            if(mp[word] > mx) {
                mx++;
                result = word;
            }
        }
        cout << result << " " << mx << endl;
    }
    return 0; 
}