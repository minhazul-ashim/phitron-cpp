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

class MyStack {
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;
        void push(int val) {
            sz++;
            Node *newNode = new Node(val);
            if(head == NULL) {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        void pop() {
            sz--;
            Node *deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL) {
                head = NULL;
            }
            delete deleteNode;
        }
        int top() {
            return tail->value;
        }
        int size() {
            return sz;
        }
        bool empty() {
            if(head == NULL) {
                return true;
            } else {
                return false;
            }
        }
};

class MyQueue {
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;
    void push(int val) {
        sz++;
        Node *newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop() {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if(head == NULL) {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front() {
        return head->value;
    }
    int size() {
        return sz;
    }
    bool empty() {
        if(sz == 0) {
            return true;
        } else {
            return false;
        }
    }
};

int main () {
    MyStack s;
    MyQueue q;
    int n, m;
    cin >> n;
    cin >> m;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.push(val);
    }
    cin.ignore();
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    };
    bool flag = true;
    if(n != m) {
        flag = false;
        cout << "NO" << endl;
        return 0;
    }
    list<int> l1;
    list<int> l2;
    while(!s.empty()) {
        l1.push_back(s.top());
        s.pop();
    }
    while(!q.empty()) {
        l2.push_back(q.front());
        q.pop();
    }
    if(l1 == l2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
