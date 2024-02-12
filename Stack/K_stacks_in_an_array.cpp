#include<bits/stdc++.h>
using namespace std;

class NStack
{
public:
    // Initialize your data structure.
    int *arr;
    int *next;
    int *top;
    int freetop = 0;
    int N,S;

    // n is the number of stacks
    // s is the size of the array
    //therfore i swapped them
    NStack(int N, int S)
    {
        // Write your code here.
        N = S;
        S = N;
        arr = new int[N];
        next = new int[N];
        top = new int[S];

        for(int i=0;i<N;i++){
            arr[i] = 0;
        }
        for(int i=0;i<N;i++){
            next[i] = i+1;
            if(i==N-1){
                next[i] = -1;
            }
        }
        for(int i=0;i<S;i++){
            top[i] = -1;
        }

        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        int i = freetop;
        if(freetop == -1){
            return false;
        }
        arr[i] = x;
        freetop = next[i];
        next[i] = top[m];
        top[m] = i;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        int i = top[m];
        if(i==-1){
            return -1;
        }
        top[m] = next[i];
        next[i] = freetop;
        freetop = i;
        return arr[i];
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