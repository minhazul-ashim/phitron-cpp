#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int cls;
    string sec;
    int id;
};

void reverseId(Student * student, int n) {
    int t = n / 2;
    for (int i = 0; i < t; i++) {
        int temp = student[i].id;
        student[i].id = student[(n-1) - i].id;
        student[(n-1) - i].id = temp;
    }
}

int main () {
    int t;
    cin >> t;
    cin.ignore();
    Student arr[t];
    for (int i = 0; i < t; i++) {
        Student student;
        cin >> student.name;
        cin >> student.cls;
        cin >> student.sec;
        cin >> student.id;
        arr[i] = student;
    }
    reverseId(&arr[0], t);
    for (int i = 0; i < t; i++) {
        cout << arr[i].name<<" ";
        cout << arr[i].cls<<" ";
        cout << arr[i].sec<<" ";
        cout << arr[i].id<<" ";
        cout << "\n";
    }
    return 0;
}