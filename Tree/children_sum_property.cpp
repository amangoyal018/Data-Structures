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

bool child_sum(Node *root){

    if(root == nullptr){
        return true;
    }
    if(root->left == nullptr and root->right == nullptr){
        return true;
    }
    if(child_sum(root->left) and child_sum(root->right)){
        int temp = 0;
        if(root->left != nullptr){
            temp += root->left->data;
        }
        if(root->right != nullptr){
            temp += root->right->data;
        }
        if(temp == root->data){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
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
    
    Node* root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(2);
    // root->left->left = new Node(3);
    // root->left->right = new Node(5);
    root->right->left = new Node(2);
    // root->right->right = new Node(60);
    // root->right->left->right = new Node(10);
    

    if(child_sum(root)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}