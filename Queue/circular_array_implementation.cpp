#include<bits/stdc++.h>
using namespace std;


struct myQueue{

    int *arr;
    int cap;
    int size;
    int front;

    myQueue(int c){

        arr = new int[c];
        cap = c;
        size = 0;
        front = 0;
    }

    void enqueue(int x){

        if(size == cap){
            cout << "Queue Full" << "\n";
            return;
        }
        int rear = (front + size)%cap;

        arr[rear] = x;
        size++;
    }
    void dequeue(){
        if(size == 0){
            cout << "Queue Empty" << "\n";
        }
        front = (front+1)%cap;  
        size--;
    }

    int size_(){
        return size;
    }

    int getFront(){
        return arr[front];
    }

    int getRear(){
        return arr[(front + size - 1)%cap] ;
    }

    bool isEmpty(){
        return size==0;
    }

    bool isFull(){
        return size == cap;
    }

    void print(){
        for(int i=0 ;i<cap;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
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
    
    myQueue q(4);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.dequeue();
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    // q.enqueue(70);
    q.print();
    cout<< q.getFront() << " " << q.getRear() << "\n";
    cout<<q.size_();
    // cout << q.getFront() << " " << q.getRear() << "\n";
    // q.dequeue();
    // cout << q.size_() << " ";







       
    

    
}