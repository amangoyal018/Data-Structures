#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

struct MyQueue{
    Node * front;
    Node *rear;
    int size;

    MyQueue(){
        front = nullptr;
        rear = nullptr;
        size = 0;
    }
    void enqueue(int x){
        Node * temp = new Node(x);
        if(front == nullptr){
            front = temp;
            rear = temp;
        }else{
            rear -> next = temp;
            rear = temp;
        }

    }

    void dequeue{
        Node *temp = front;
        front = front->next;
        delete temp;
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
    
    







       
    

    
}