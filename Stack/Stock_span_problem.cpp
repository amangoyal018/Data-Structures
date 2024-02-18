#include<bits/stdc++.h>
using namespace std;


vector <int> calculateSpan(int price[], int n)
{
    // Your code here
    vector<int> span(n,-1);
    
    span[0] = 1;
    int prevGreater = 0;
    for(int i=1;i<n;i++){
        while(price[prevGreater] <= price[i]){
            prevGreater -= span[prevGreater];
            if(prevGreater == -1){
                span[i] = i + 1;
                prevGreater = i;
                break;
            }
        }
        if(span[i] == -1){
            span[i] = i - prevGreater;
            prevGreater = i;
        }
    }
    return span;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

     

    

    
}