#include<bits/stdc++.h>
using namespace std;

struct dq{
    int *arr;
    int cap;
    int front;
    int size;
    dq(int c){
        arr = new int[c];
        front = 0;
        size = 0;
        cap =c; 
    }

    void insertFront(int x){
        if(size == cap){
            cout << "deque full";
            return;
        }
        front = ((front - 1)%cap + cap)%cap;
        arr[front] = x;
        size++;
    }

    void insertRear(int x){

        int rear = (front + size - 1)%cap;
        rear = (rear + 1)%cap;
        arr[rear] = x;
        size++;

    }

    void deleteFront(){
        front = (front + 1)%cap;
        size--;
    }

    void deleteRear(){
        int rear = (front + size - 1)%cap;
        rear = ((rear - 1) % cap + cap)%cap;
        size--;     
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
