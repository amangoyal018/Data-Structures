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


void Print_line_by_line(Node *root){
    if(root == nullptr){
        return;
    }

    queue<Node *> q;
    q.push(root);
    Node *space = root;

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if(temp->left != nullptr){
            q.push(temp->left);
        }
        if(temp->right != nullptr){ 
            q.push(temp->right);
        }
        if(space == temp){
            cout << "\n";
            if(!q.empty()){
                space = q.back();
            }
        }
    }
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
    root->right->right = new Node(60);
    root->right->right->left = new Node(70);
    root->right->right->right = new Node(80);

    Print_line_by_line(root);
    
    
}