#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};
void printList(Node *head)

{   
    if(head == nullptr){
        return;
    }
    Node *temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp != head);
}
//naive approach by finding the tail element
// Node *insertBegin(Node *head,int x){
//     if(head == nullptr){
//         head = new Node(x);
//         head->next = head;
//         return head;
//     }
//     Node *temp = head;
//     do{
//         temp = temp->next;
//     }while(temp->next != head);
//     Node *temp2 = new Node(x);
//     temp2->next = head;
//     temp->next = temp2;
//     return temp2;

// }
Node *insertBegin(Node *head,int x){
    if(head == nullptr){
        head = new Node(x);
        head->next = head;
        return head;
    }
    Node *temp = new Node(x);
    temp->next = head->next;
    head->next = temp;
    int value = head->data;
    head->data = x;
    temp->data = value;
    return head;

}
Node *insertEnd(Node *head ,int x){
    if(head ==  nullptr){
        head = new Node(x);
        head->next = head;
        return head;
    }
    Node *temp = new Node(x);
    temp->next = head->next;
    head->next = temp;
    int value = head->data;
    head->data = x;
    temp->data = value;
    return temp;

}
// naive theta n solN
// Node *delheadcll (Node *head ){
//     if(head == nullptr){
//         return nullptr;
//     }
//     if(head->next == head){
//         delete head;
//         return nullptr;
//     }
//     Node *curr = head;
//     do{ 
//         curr = curr->next;
//     }while(curr->next!=head);
//     curr->next = head->next;
//     delete head;
//     return curr->next;
// }

//efficient 
Node *delheadcll (Node *head ){
    if(head == nullptr){
        return nullptr;
    }
    if(head->next == head){
        delete head;
        return nullptr;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
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

    Node *head = nullptr;
    head = insertBegin(head ,40);
    head = insertBegin(head ,30);
    head = insertBegin(head ,20);
    head = insertBegin(head ,10);
    head = delheadcll(head);
    head = delheadcll(head);
    head = delheadcll(head);
    head = delheadcll(head);
    
    printList(head);
}