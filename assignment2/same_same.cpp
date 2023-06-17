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

void insertTail(Node *& head, int v) {
    Node * newNode = new Node(v);
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

void compareLists(Node * h1, Node * h2) {
    bool flag = true;
    Node *temp1 = h1;
    Node *temp2 = h2;
    while(temp1 != NULL && temp2 != NULL) {
        if(temp1->value != temp2->value) {
            flag = false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(!temp1 && temp2 || temp1 && !temp2) {
        flag = false;
    }
    if(flag) {
        cout << "YES";
    } else  {
        cout << "NO";
    }
}

int main () {
    Node *head1 = NULL;
    Node *head2 = NULL;
    bool flag = true;
    while(flag) {
        int val;
        cin >> val;
        if(val == -1) {
            flag = false;
        } else  {
            insertTail(head1, val);
        }
    }
    flag = true;
    while(flag) {
        int val;
        cin >> val;
        if(val == -1) {
            flag = false;
        } else  {
            insertTail(head2, val);
        }
    }
    compareLists(head1, head2);
    return 0;
}