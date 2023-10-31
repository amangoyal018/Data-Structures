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
Node* insertEnd(Node* head,int x){
    if(head==NULL){
        Node *temp = new Node(x);
        temp->next=head;
        return temp;

    }
    Node *curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr->next=new Node(x);
    return head;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = NULL;
    // head = insertBegin(head,10);
    // head = insertBegin(head,20);
    // head = insertBegin(head,30);
    head = insertEnd(head,0);
    // head = insertEnd(head,-10);
    printList(head);


    
    

    

    

    
    
}