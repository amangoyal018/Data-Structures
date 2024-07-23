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
map<int,int> m;
Node* Solve(int low,int high,vector<int>& preorder, vector<int>& inorder,int &cnt){
    cout<<low << " " << high << " " << cnt<<"\n";
    if(low<=high){
        Node* root = new Node(preorder[cnt]);
        int mid  = m[preorder[cnt]];
        cnt++;
        root->left = Solve(low,mid-1,preorder,inorder,cnt);
        root->right = Solve(mid+1,high,preorder,inorder,cnt);
        return root;
    }
    return nullptr;
}

Node* buildTree(vector<int>& preorder, vector<int>& inorder) {
    for(int i=0;i<inorder.size();i++){
        m[inorder[i]] = i;
    }
    cout << m[3] << "\n";
    int cnt = 0;
    return Solve(0,preorder.size()-1,preorder,inorder,cnt);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v1 = {3,9,20,15,7};
    vector<int> v2 = {9,3,15,20,7};
    buildTree(v1,v2);
    
    
}