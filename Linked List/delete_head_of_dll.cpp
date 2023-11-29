#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

void printList(Node *head)
{
    if (head == nullptr)
    {
        return;
    }

    cout << head->data << " ";
    if (head->next == nullptr)
    {
        return;
    }
    printList(head->next);
}

Node *insertBegin(Node *head,int data){


    Node *temp = new Node(data);
    if(head == nullptr ){
        return temp;
    }
    temp->next = head;
    head->prev = temp;
    return temp;
}

Node *insertEnd(Node *head,int data){
    Node *temp = new Node(data);
    if(head==nullptr){
        return temp;
    }
    Node *curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node *reverse_dll(Node *head){

    Node *curr = head;
    Node *temp = nullptr;

    if(head == nullptr or head->next == nullptr){
        return head;

    } 
    while(curr!=nullptr){
        temp = curr->prev;
        curr->prev=curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    return temp->prev;
}
Node *delete_head(Node *head){
    if(head == nullptr){
        return head;
    }
    if(head->next == nullptr){
        delete head;
        return nullptr;
    }
    Node *temp = head;

    head->next->prev = nullptr;
    delete temp;
    return head->next;

}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = nullptr;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    head = delete_head(head);
    
    printList(head);
}