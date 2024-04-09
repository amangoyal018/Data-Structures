

#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left = right = nullptr;
    }

};

int height(Node *root){

    if(root == nullptr){
        return 0;
    }

    int left_side = height(root->left);
    int right_side = height(root->right);

    return max(left_side,right_side) + 1; 
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
    root->left = new Node(8);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->right->left = new Node(70);\

    cout << height(root);


    
    
    
}