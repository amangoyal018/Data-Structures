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

void Print_left(Node *root){
    queue<Node *> q;
    q.push(root);
    Node *to_print = root;
    while(!q.empty()){
        int n = q.size();
        cout<<q.front()->data << " ";
        for(int i=0;i<n;i++){
            if(q.front()->left != nullptr){
                q.push(q.front()->left);
            }
            if(q.front()->right != nullptr){
                q.push(q.front()->right);
            }
            q.pop();
        }    
    }
}


//recursive
void Print_left(Node *root){
    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node* root = new Node(30);
    // root->left = new Node(20);
    root->right = new Node(50);
    // root->left->left = new Node(40);
    // root->left->right = new Node(50);
    root->right->left = new Node(60);
    // root->right->right = new Node(60);
    root->right->left->right = new Node(10);
    

    Print_left(root);
}