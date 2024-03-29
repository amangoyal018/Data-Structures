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

// Node *reverse_group_k(Node* head , int k){

//     Node *minus = nullptr;
//     Node *curr = head;
//     Node *initial = curr;
//     Node *res;
//     int loop = 0;
//     while(curr!=nullptr){
//         int cnt = 0;
//         minus = nullptr;
//         while(cnt<k){
//             loop++;
//             Node *plus = curr->next;    
//             curr->next = minus;
//             minus = curr;
//             curr = plus;
//             cnt++;
//             if(loop==3){
//                 res = minus;
//             }
//         }
//         // minus = initial;
//         // break;
//     }
//     initial->next = minus;
//     return res;

// }

// Node *reverse_group_k(Node* head , int k){
//     Node *curr = head;
//     Node *minus = nullptr;
//     int cnt = 0;
//     Node *plus = nullptr;
//     while(curr!=nullptr and cnt<k){
//         plus = curr->next;
//         curr->next = minus;
//         minus = curr;
//         curr = plus;
//         cnt++;
//     }
//     if(curr == nullptr){
//         return minus;
//     }
//     Node *rest_head = reverse_group_k(plus,k);
//     head->next = rest_head;
//     return minus;
// }

//iterative solution
Node *reverse_group_k(Node* head , int k){
    Node *curr = head;
    bool fisrstPass = true;
    Node *prevTemp = nullptr;

    while(curr!=nullptr){
        int cnt = 0;
        Node *temp = curr;
        Node *minus = nullptr;
        while(curr!=nullptr and cnt<k){
            Node *plus = curr->next;
            curr->next = minus;
            minus = curr;
            curr = plus;
            cnt++;
        }
        if(fisrstPass){
            prevTemp = temp;
            head = minus;
            fisrstPass = false;
        }else{
            prevTemp->next = minus;
            prevTemp = temp;
        }
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

    Node *head = nullptr;
    // head = insertBegin(head, 90);
    head = insertBegin(head, 80);
    head = insertBegin(head, 70);
    head = insertBegin(head, 60);
    head = insertBegin(head, 50);
    head = insertBegin(head, 40);
    head = insertBegin(head, 30);
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    head = reverse_group_k(head,3);
    printList(head);
    // cout<<"hello";
}