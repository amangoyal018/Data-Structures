#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};

void printList(Node *head){
    if(head==nullptr){
        return;
    }

    cout<<head->data<<" ";
    if(head->next == nullptr){
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
    if(head==nullptr){
        Node *temp = new Node(x);
        temp->next=head;
        return temp;

    }
    Node *curr = head;
    while(curr->next!=nullptr){
        curr = curr->next;
    }
    curr->next=new Node(x);
    return head;
}

Node *delHead(Node * head){

    if(head == nullptr){
        return nullptr;
    }
    Node *temp = head->next;
    delete head;
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
    Node * head = nullptr;
    // head  = insertBegin(head , 40);
    // head  = insertBegin(head , 30);
    // head  = insertBegin(head , 20);
    head  = insertBegin(head , 10);
    head  = delHead(head);
    printList(head);


    
    

    

    

    
    
}