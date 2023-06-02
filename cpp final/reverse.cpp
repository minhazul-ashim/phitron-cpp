#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int cls;
    string sec;
    int mathMarks;
    int engMarks;
};

void printFn(Student student) {
    cout << student.name<<" ";
    cout << student.cls<<" ";
    cout << student.sec<<" ";
    cout << student.mathMarks<<" ";
    cout << student.engMarks<<" ";
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
        cin >> student.mathMarks;
        cin >> student.engMarks;
        arr[i] = student;
    }
    for (int i = t-1; i >= 0; i--) {
        printFn(arr[i]);
        cout << "\n";
    } 
    return 0;
}