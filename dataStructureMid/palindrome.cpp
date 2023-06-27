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

void reverseList(Node *& head, Node * curr) {
    if(curr->next == NULL) {
        head = curr;
        return;
    }
    reverseList(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
}

bool isPalindrome(Node *& head, Node *& tail) {
    Node *nhead = NULL;
    Node *nTail = NULL;
    Node *temp = head;
    while(temp != NULL) {
        insertTail(nhead, nTail, temp->value);
        temp = temp->next;
    }
    reverseList(nhead, nhead);
    temp = head;
    Node *temp2 = nhead;
    while(temp != NULL) {
        if(temp->value != temp2->value) {
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return true;
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
    bool res = isPalindrome(head, tail);
    if(res) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}