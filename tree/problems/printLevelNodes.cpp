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
    cin.ignore();
    return root;
}



void levelOrder(Node * root, int givenLevel) {
    queue<pair<Node*, int>> q;
    int maximumLevel = 0;
    if(root) {
        q.push({root, 0});
    }
    while(!q.empty()) {
        pair<Node *, int> parent = q.front();
        q.pop();
        Node *node = parent.first;
        int level = parent.second;

        if(level == givenLevel) {
            cout << node->val << " ";
        }

        if(level > maximumLevel) {
            maximumLevel = level;
        }

        if(node->left) {
            q.push({node->left, level + 1});
        }
        if(node->right) {
            q.push({node->right, level + 1});
        }
    }
    if(givenLevel > maximumLevel) {
        cout << "Invalid";
    }
}

int main () {
    Node *root = bTreeInput();
    int level;
    cin >> level;
    levelOrder(root, level);
    return 0;
}