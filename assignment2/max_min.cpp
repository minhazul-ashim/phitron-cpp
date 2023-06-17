#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node *next;
    Node(int v) {
        this->value = v;
        this->next = NULL;
    }
};

int * minMax(Node * head) {
    int *minMax = new int(2);
    minMax[0] = head->value;
    minMax[1] = head->value;
    Node *temp = head;
    while(temp != NULL) {
        if(temp->value > minMax[0]) {
            minMax[0] = temp->value;
        }
        if(temp->value < minMax[1]) {
            minMax[1] = temp->value;
        }
        temp = temp->next;
    }
    return minMax;
}

void insertTail (Node *& head, int v) {
    Node *newNode = new Node(v);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main () {
    Node * head = NULL;
    bool flag = true;
    while(flag) {
        int v;
        cin >> v;
        if(v == -1) {
            flag = false;
        } else {
            insertTail(head, v);
        }
    }
    int *arr = minMax(head);
    cout << arr[0] << " " << arr[1];
    return 0;
}