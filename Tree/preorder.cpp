#include<bits/stdc++.h>
using namespace std;


struct Node{

    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left = right = nullptr;
    }
};

void preOrder(Node *root){

    if(root == nullptr){
        return;
    }
    cout<<root->data << " ";
    preOrder(root->left);
    preOrder(root->right);


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
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);
    root->right->right = new Node(60);

    preOrder(root);

    
    
    
}