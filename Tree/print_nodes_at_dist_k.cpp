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
void Print(Node *root, int k){
    if(root == nullptr){
        return;
    }
    if(k==0){
        cout << root->data << " ";
        return;
    }
    Print(root->left,k-1);
    Print(root->right,k-1);

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
    root->left = new Node(6);
    root->right = new Node(8);
    root->right->right = new Node(7);
    root->right->right->left = new Node(11);   
    root->right->right->right = new Node(12);   

    
    Print(root,3);
}