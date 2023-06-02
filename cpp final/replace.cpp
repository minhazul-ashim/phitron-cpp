#include <bits/stdc++.h>
using namespace std;

void replaceFun (string & s, string & c) {
    int i;
    i = s.find(c);
    if(i == -1) {
        return;
    }
    s.replace(i,c.length(),"$");
    replaceFun(s, c);
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t > 0) {
      string a;
      cin>>a;
      string c;
      cin>>c;
      replaceFun(a, c);
      cout<<a<<"\n";
      t--;
    }
    return 0;
}