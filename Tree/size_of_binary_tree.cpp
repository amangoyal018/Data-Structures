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

int size_of_bt(Node *root){
    if(root == nullptr){
        return 0;
    }
    return 1 + size_of_bt(root->left) + size_of_bt(root->right);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node* root = new Node(80);
    root->left = new Node(30);
    root->right = new Node(40);
    root->left->left = new Node(20);
    root->right->right = new Node(10);
    root->right->right->right = new Node(5);
    

    cout << size_of_bt(root);
}