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
//requires 1 traversal and theta n auxillary space;
// int middle_ll(Node *head){
//     vector<int> v;
//     Node *curr = head;
//     int cnt = 1;
//     v.push_back(head->data);
//     while(curr->next!=nullptr){
//         curr=curr->next;
//         v.push_back(curr->data);
//         cnt++;
//     }
//     return v[cnt/2];

// }
void middle_ll(Node *head){
    Node *slow = head;
    Node *fast = head;
    if(head == nullptr){
        return;
    }

    while(fast!=nullptr){
        if(fast->next == nullptr){
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<< slow->data <<"\n";
   

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
    // head = insertBegin(head, 60);
    // head = insertBegin(head, 50);
    // head = insertBegin(head, 40);
    // head = insertBegin(head, 30);
    // head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    middle_ll(head);
    printList(head);
}