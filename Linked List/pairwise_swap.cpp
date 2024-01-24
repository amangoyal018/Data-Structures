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

// Node *pairwise_swap(Node *head){

//     if(head == nullptr or head-> next == nullptr){
//         return head;
//     }
//     Node *a = head;
//     Node *b = head->next;
//     Node *prev = nullptr;
//     bool isFirst = true;
//     while(true){
//         if(prev != nullptr){
//             prev -> next = b;
//         }

//         Node *plus = b-> next;
//         b -> next = a;
//         if(isFirst){
//             head = b;
//             isFirst = false;
//         }
//         prev = a;
//         if(plus == nullptr){
//             prev->next = nullptr;
//             break;
//         }else if(plus->next == nullptr){
//             prev -> next = plus;
//             break;
//         }
//         a = plus;
//         b = plus -> next;

//     }
//     return head;
// }

//compact code
Node *pairwise_swap(Node *head){

    if(head == nullptr or head-> next == nullptr){
        return head;
    }
    Node *curr = head->next->next;
    head->next->next = head;
    head->next = curr;

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
    head = insertBegin(head, 6);
    head = insertBegin(head, 5);
    head = insertBegin(head, 4);
    head = insertBegin(head, 3);
    head = insertBegin(head, 2);
    head = insertBegin(head, 1);
    head = pairwise_swap(head);
    printList(head);
}