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

void insertHead(Node *& head, Node *& tail, int v) {
    Node *newNode = new Node(v);
    if(head == NULL) {
        tail = newNode;
    }
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    cin.ignore();
    while(q--) {
        int op;
        cin >> op;
        int v;
        cin >> v;
        cin.ignore();
        if(op == 0) {
            insertHead(head, tail, v);
        } else {
            insertTail(head, tail, v);
        }
        cout << head->value << " " << tail->value << endl;
    }
    return 0;
}