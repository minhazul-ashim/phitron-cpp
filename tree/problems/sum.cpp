#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *left;
        Node *right;
    
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node * bTreeInput() {
    int val;
    cin >> val;
    Node *root;
    if(val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }
    queue<Node *> q;
    if(root) {
        q.push(root);
    }
    while(!q.empty()) {
        Node * f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if(l == -1) {
            left = NULL;
        }
        else {
            left = new Node(l);
        }

        if(r == -1) {
            right = NULL;
        } else {
            right = new Node(r);
        }

        f->left = left;
        f->right = right;

        if(f->left) {
            q.push(f->left);
        }
        if(f->right) {
            q.push(f->right);
        }
    }
    return root;
}

void countSum(Node * root, int * sum) {
    queue<Node *> q;
    q.push(root);
    while(!q.empty()) {
        Node *current = q.front();
        q.pop();

        *sum = *sum + current->val;

        if(current->left) q.push(current->left);
        if(current->right) q.push(current->right);
    }
}

int main () {
    int *sum = new int;
    *sum = 0;
    Node *root = bTreeInput();
    countSum(root, sum);
    cout << *sum << endl;
    return 0;
}