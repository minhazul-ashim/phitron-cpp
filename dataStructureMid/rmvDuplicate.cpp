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

void printLinkedList (Node * head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertTail(Node *& head, Node *&tail, int v) {

    Node *newNode = new Node(v);
    if(tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void sort_linked_list(Node *& head) {
    for (Node *i = head; i->next != NULL; i=i->next) {
        for (Node *j = i->next; j != NULL; j = j->next) {
            if(i->value > j->value) {
                swap(i->value, j->value);
            }
        }
    }
}

void removeDuplicates(Node *& head) {
    Node *temp = head;
    while(temp->next != NULL) {
        if(temp->value == temp->next->value) {
            temp->next = temp->next->next;
        }
        if(temp->next == NULL) {
            break;
        } else if(temp->value != temp->next->value) {
            temp = temp->next;
        }
    }
}

int main () {
    Node *head = NULL;
    Node *tail = NULL;
    while(true) {
        int val;
        cin >> val;
        if(val == -1) {
            break;
        }
        insertTail(head, tail, val);
    }
    sort_linked_list(head);
    printLinkedList(head);
    removeDuplicates(head);
    printLinkedList(head);
    return 0;
}