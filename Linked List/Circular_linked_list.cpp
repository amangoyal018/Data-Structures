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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *head = new Node(10);
    head->next = new Node (5);
    head->next->next = new Node (20);
    head->next->next->next = new Node (15);
    head->next->next->next->next=head;

    
    printList(head);
}