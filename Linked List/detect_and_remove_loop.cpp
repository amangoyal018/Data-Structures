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
//Hashing
// bool detectLoop(Node*head){
//     Node *curr = head;
//     map<Node*,int> m;
//     while(true){
//         if(curr == nullptr){
//             break;
//         }
//         if(m.count(curr)==0){
//             m[curr] = 1;
//             cout<<curr->data<<"\n";
//             curr = curr->next;
//         }else{
//             return true;
//         }
//     }
//     return false;
// }

//theta n approach with no auxillary space
// bool detectLoop(Node *head){
//     Node *a = head;
//     Node *b = head;
//     while(a != nullptr and (b != nullptr and b->next != nullptr)){
//             a = a->next;
//             b = b->next->next;
//             if(a == b){
//                 return true;
//             }
//     }
//     return false;
// }
void removeLoop(Node* head)
    {
            Node *a = head;
            Node *b = head;
            bool isLoop = false;
            while(b!=nullptr and b->next!= nullptr){
                a = a -> next;
                b = b -> next -> next;
                if(a==b){
                    isLoop = true;
                    break;
                }
                // cout<<a->data << " "<< b->data <<"\n";
            }
            if(!isLoop){
                return;
            }else{
                // cout << b->data <<"\n";
                a = head;
                if(a==b){
                    do{
                        a = a -> next;
                    }while(a -> next !=b);
                    a -> next = nullptr;
                    return;
                }
                
                while(a -> next != b -> next){
                    a = a->next;
                    b = b->next;
                }
                b->next = nullptr;
            }
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
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = head;
    // if(detectLoop(head)){
    //     cout<<"YES";
    // }else{
    //     cout<<"NO";
    // }
    removeLoop(head);
    
    printList(head);
}