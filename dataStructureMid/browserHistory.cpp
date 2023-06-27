#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    string value;
    Node *next;
    Node *prev;
    Node(string v) {
        this->value = v;
        this->next = NULL;
        this->prev = NULL;
    }
};

string findAndStoreNode (Node * head, Node *& current, string target) {
    Node *temp = head;
    while(temp != NULL) {
        if(temp->value == target) {
            current = temp;
            return temp->value;
        }
        temp = temp->next;
    }
    return "Not Available";
}

void insertTail(Node *& head, Node *& tail, string v) {
    Node *newNode = new Node(v);
    if(tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

int main () {
    Node *head = NULL;
    Node *tail = NULL;
    Node *currentTab = NULL;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while(ss >> word) {
        if(word == "end") {
            break;
        } else {
            insertTail(head, tail, word);
        }
    }
    int queries;
    cin >> queries;
    cin.ignore();
    while(queries--) {
        string command;
        cin >> command;
        string url;
        if(command == "visit") {
            cin >> url;
            string result = findAndStoreNode(head, currentTab, url);
            cout << result << endl;
        } else if(command == "prev" && currentTab != NULL) {
            bool flag = currentTab->prev ? true : false;
            if(flag) {
                currentTab = currentTab->prev;
                cout << currentTab->value << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if(command == "next" && currentTab != NULL) {
            bool flag = currentTab->next ? true : false;
            if(flag) {
                currentTab = currentTab->next;
                cout << currentTab->value << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
        cin.ignore();
    }
    return 0;
}