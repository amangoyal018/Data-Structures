#include<bits/stdc++.h>
using namespace std;


struct myQueue{

    int *arr;
    int cap;
    int size;

    myQueue(int c){

        arr = new int[c];
        cap = c;
        size = 0;
    }

    void enqueue(int x){
        arr[size] = x;
        size++;
    }
    void dequeue(){
        for(int i=1;i<size;i++){
            arr[i-1] = arr[i];
        }
        size--;
    }

    int size_(){
        return size;
    }

    int getFront(){
        return arr[0];
    }

    int getRear(){
        return arr[size-1] ;
    }

    bool isEmpty(){
        return size==0;
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
    
    myQueue q(5);
    q.enqueue(30);
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    cout << q.getFront() << " " << q.getRear() << "\n";
    q.dequeue();
    q.dequeue();
    // cout << q.size_() << " ";







       
    

    
}