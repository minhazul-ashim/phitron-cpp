#include<bits/stdc++.h>
using namespace std;

bool findNemo(string & s, string & c) {
    stringstream ss(s);
    string word;
    bool flag = false;
    while(ss >> word) {
        if(word == c) {
            flag = true;
        }
    }
    return flag;
}

int main () {

    string s;
    getline(cin, s);
    string c = "Ratul";
    bool found = findNemo(s, c);
    if(found) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}