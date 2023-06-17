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

void sortLinkedList(Node * head, int n) {
    for (Node *i = head; i->next != NULL; i=i->next) {
        for (Node *j = i->next; j != NULL; j = j->next) {
            if(i->value > j->value) {
                swap(i->value, j->value);
            }
        }
    }
    int remainder = n % 2;
    int mid = remainder ? n / 2 : n / 2 - 1;
    Node *temp = head;
    for (int i = 0; i < mid; i++) {
        temp = temp->next;
    }
    if(remainder) {
        cout << temp->value;
    } else {
        cout << temp->next->value << " " << temp->value;
    }
}

int main () {
    Node * head = NULL;
    bool flag = true;
    int nodeCount = 0;
    while(flag) {
        int v;
        cin >> v;
        if(v == -1) {
            flag = false;
        } else {
            nodeCount++;
            insertTail(head, v);
        }
    }
    sortLinkedList(head, nodeCount);
    return 0;
}