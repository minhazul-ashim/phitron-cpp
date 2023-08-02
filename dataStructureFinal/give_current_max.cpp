#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
    Student(string n, int r, int m) {
        this->name = n;
        this->roll = r;
        this->marks = m;
    }
};

class cmp {
    public: 
        bool operator()(Student a, Student b) {
            if(a.marks < b.marks) {
                return true;
            } else if(a.marks > b.marks) {
                return false;
            } else {
                if(a.roll > b.roll) {
                    return true;
                } else {
                    return false;
                }
            }
        }
};

int main () {
    // fstream cin;
    // fstream outputFile;
    // cin.open("input.txt", ios::in);
    // outputFile.open("output.txt", ios::out);
    // if(!cin) {
    //     cout << "No Input File Found"<<endl;
    //     return 0;
    // }
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        int roll;
        cin >> roll;
        int marks;
        cin >> marks;
        Student s(name, roll, marks);
        pq.push(s);
    }
    int q;
    cin >> q;
    while(q--) {
        int c;
        cin >> c;
        if(c == 0) {
            string name;
            cin >> name;
            int roll;
            cin >> roll;
            int marks;
            cin >> marks;
            Student s(name, roll, marks);
            pq.push(s);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        } else if(c == 1) {
            if(!pq.empty()) {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            } else {
                cout << "Empty" << endl;
            }
        } else if(c == 2) {
            if(!pq.empty()) {
                pq.pop();
            }
            if(!pq.empty()) {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}