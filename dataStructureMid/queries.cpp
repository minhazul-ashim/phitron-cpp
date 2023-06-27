#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node *next;
    Node *prev;
    Node(int v) {
        this->value = v;
        this->next = NULL;
        this->prev = NULL;
    }
};

int getSize(Node * head) {
    int count = 0;
    Node *temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void printLinkedList (Node * head) {
    Node *temp = head;
    cout << "L -> ";
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printReversedList(Node * tail) {
    Node *temp = tail;
    cout << "R -> ";
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertTail(Node *& head, Node *& tail, int v) {
    Node *newNode = new Node(v);
    if(tail == NULL) {
        tail = newNode;
        head = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertHead(Node *& head, Node *& tail, int v) {
    Node *newNode = new Node(v);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

bool insertAtPosition (Node *& head, Node *& tail, int v, int pos) {
    Node *newNode = new Node(v);
    if(pos == 0) {
        insertHead(head, tail, v);
        return true;
    } else if(pos == getSize(head)) {
        insertTail(head, tail, v);
        return true;
    } else if(pos > getSize(head)) {
        cout << "Invalid" << endl;
        return false;
    }
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++) {
        temp = temp->next;
    };
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
    return true;
}

int main () {
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    cin.ignore();
    while(q--) {
        int pos;
        cin >> pos;
        int val;
        cin >> val;
        cin.ignore();
        bool flag = insertAtPosition(head, tail, val, pos);
        if(flag) {
            printLinkedList(head);
            printReversedList(tail);
        }
    }
    return 0;
}