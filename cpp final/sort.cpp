#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int cls;
    string sec;
    int id;
    int mathMarks;
    int engMarks;
};

bool sortStudent(Student a, Student b) {
    if((a.mathMarks + a.engMarks) == (b.engMarks + b.mathMarks) && a.id > b.id) {
        return true;
    } else if((a.mathMarks + a.engMarks) > (b.engMarks + b.mathMarks)) {
        return true;
    } else {
        return false;
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
        cin >> student.mathMarks;
        cin >> student.engMarks;
        arr[i] = student;
    }
    sort(arr, arr + t, sortStudent);
    for (int i = 0; i < t; i++) {
        cout << arr[i].name<<" ";
        cout << arr[i].cls<<" ";
        cout << arr[i].sec<<" ";
        cout << arr[i].id<<" ";
        cout << arr[i].mathMarks<<" ";
        cout << arr[i].engMarks<<endl;
    }
    return 0;
}