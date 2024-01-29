#include<bits/stdc++.h>
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


struct MyStack
{

    Node *curr;
    int size_;

    MyStack()
    {
        size_ = 0;
    } 
    void push(int x)
    {   
        if(curr == nullptr){
            curr = new Node(x);
        }else{
            Node *top = new Node(x);
            top -> next = curr;
            curr = top;
        }
        size_++;

    }
    int pop()
    {
        Node *temp = curr;
        curr = curr -> next;
        int res = temp -> data;
        delete temp;
        size_--;
        return res;
    }
    int peek()
    {   
        return curr->data;
    }
    int size()
    {
        return size_;
    }

    bool isEmpty()
    {
        return size_ == 0;
    }

};


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<"\n";
    // cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.size()<<"\n";
    s.push(40);
    cout<<s.peek()<<"\n";
    cout<<s.isEmpty()<<"\n";
    // s.push(50);
    // s.push(60);

    
}