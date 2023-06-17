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

void sortLinkedList(Node * head) {
    for (Node *i = head; i->next != NULL; i=i->next) {
        for (Node *j = i->next; j != NULL; j = j->next) {
            if(i->value > j->value) {
                swap(i->value, j->value);
            }
        }
    }
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
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
    sortLinkedList(head);
    return 0;
}