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

void insertTail (Node *& head, Node *& tail, int v) {
    Node *newNode = new Node(v);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printList (Node * node) {
    if(node == NULL) return;
    printList(node->next);
    cout << node->value << " ";
}

int main () {
    Node * head = NULL;
    Node * tail = NULL;
    bool flag = true;
    while(flag) {
        int v;
        cin >> v;
        if(v == -1) {
            flag = false;
        } else {
            insertTail(head, tail, v);
        }
    }
    printList(head);
    cout << endl;
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    return 0;
}