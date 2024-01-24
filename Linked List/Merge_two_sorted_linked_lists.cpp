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

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *insertEnd(Node *head, int x)
{
    if (head == nullptr)
    {
        Node *temp = new Node(x);
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = new Node(x);
    return head;
}

Node *delHead(Node *head)
{

    if (head == nullptr)
    {
        return nullptr;
    }
    Node *temp = head->next;
    delete head;
    return temp;
}
Node *delTail(Node *head)
{

    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *curr = head;
    while (curr->next->next != nullptr)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = nullptr;
    return head;
}
Node *insertPos(Node *head, int pos, int data)
{
    if (pos == 1)
    {
        Node *temp = new Node(data);
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    int cnt = 1;
    pos = pos - 1; // i want one just before element..
    while (curr != nullptr)
    {
        if (cnt == pos)
        {
            Node *temp = new Node(data);
            temp->next = curr->next;
            curr->next = temp;
            return head;
        }
        curr = curr->next;
        cnt++;
    }
    return head;
}

// int searchll(Node *head,int x){
//     int cnt = 1;
//     if(head == nullptr){
//         return -1;
//     }
//     Node *curr = head;
//     while(curr->next != nullptr){
//         cnt++;
//         curr= curr->next;
//         if(curr->data == x){
//             return cnt;
//         }
//     }
//     if(curr->data == x){
//         return cnt;
//     }else{
//         return -1;
//     }

// }

// recursive solution

int searchll(Node *head,int x){
    if(head==nullptr){
        return -1;
    }
    if(head->data == x){
        return 1;
    }else{
        int res = searchll(head->next,x);
        if(res==-1){
            return -1;

        }else{
            return res + 1;
        }
    }
}


Node* merge_sorted_ll(Node* head1,Node *head2){

    //handling base cases
    if(head1 == nullptr and head2 == nullptr){
        return nullptr;
    }else if(head1 == nullptr){
        return head2;
    }else if(head2 == nullptr){
        return head1;
    }

    //initializing pointers
    Node *a = head1;
    Node *b = head2;
    Node *head = nullptr;
    Node *tail = nullptr;

    if(head1->data < head2->data ){
        head = head1;
        tail = head1;
        a = a -> next;
    }else{
        head = head2;
        tail = head2;
        b = b -> next;
    }

    // cout<<b->data;


    //traversing and arranging thr linked list
    while(a!=nullptr and b!=nullptr){
        if(a->data < b->data){
            tail -> next = a;
            tail = tail -> next;
            a = a -> next;
        }else{
            tail -> next = b;
            tail = tail -> next;
            b = b -> next;
        }
    }

    //handling if one linked list is larger than the other
    if(b==nullptr){
        tail -> next = a;
    }else{
        tail -> next = b;
    }
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

    Node *head1 = nullptr;
    head1 = insertBegin(head1, 40);
    head1 = insertBegin(head1, 30);
    head1 = insertBegin(head1, 20);
    head1 = insertBegin(head1, 10);


    Node *head2 = nullptr;
    head2 = insertBegin(head2, 35);
    head2 = insertBegin(head2, 18);
    head2 = insertBegin(head2, 17);
    head2 = insertBegin(head2, 15);
    head2 = insertBegin(head2, 5);

    Node *head = merge_sorted_ll(head1,head2);

    
    printList(head);
}