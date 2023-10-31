#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node *head){

    cout<<head->data<<" ";
    if(head->next == NULL){
        return;
    }
    printList(head->next);

}

Node* insertBegin(Node* head,int x){
    Node *temp = new Node(x);
    temp->next=head;
    return temp;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    
    

    

    

    
    
}