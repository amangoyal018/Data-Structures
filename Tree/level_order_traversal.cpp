#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};

void level_order_traversal(queue<Node *> q){
    Node * temp = q.front();
    q.pop();
    if(temp == nullptr){
        return;
    }
    cout << temp->data << " ";
    q.push(temp->left);
    q.push(temp->right);
    level_order_traversal(q);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);

    queue<Node *> q;
    q.push(root);
    level_order_traversal(q);

    
    
}