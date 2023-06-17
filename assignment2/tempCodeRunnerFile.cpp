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
        return;
    }
    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    tail = newNode;
    cout << head->value << " " << newNode->value << endl;
}

void insertHead(Node *& head, Node *& tail, int v) {
    Node *newNode = new Node(v);
    if(head == NULL) tail = newNode;
    newNode->next = head;
    head = newNode;
    cout << head->value << " " << tail->value << endl;
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
    }
    return 0;
}