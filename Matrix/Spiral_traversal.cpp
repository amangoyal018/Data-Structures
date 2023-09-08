#include<bits/stdc++.h>
using namespace std;


void Transpose( int * matrix[],int r ,int c){
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            swap(matrix[i][j],matrix[j][i]);
            // cout<<matrix[i][j]<<" "<<matrix[j][i]<<"\r";

        }
    }
}

void Print(int *matrix[],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";

        }
        cout<<"\r";
    }
}

void Spiral(int *matrix[],int start,int end1,int end2){


    // first printing elements of first row and last coloumn
    for(int i = start ; i <= end1 - 1; i++){

        // if i is other than start then we have to print the end element
        if(i!=start){
            cout<<matrix[i][end2-1]<<" ";
            continue;
        }
        //else we print the whole row
        for(int j = start; j < end2;j++){
            cout<<matrix[i][j]<<" ";
            
        }

    }

    // printing remaining last row elements and 1st coloumn

    for(int i= end1 - 1; i>start;i--){
        // if row is not last the we print the start element but 
        // keeping in mid that we have already printed the last element 
        // therefore if start==end2-1 we continue;
        if(i!=end1-1){
            if(start==end2-1){
                continue;
            }
            cout<<matrix[i][start]<<" ";
            continue;
        }
        // printint the remaining last row element 
        for(int j=end2-2;j>=start;j--){
            cout<<matrix[i][j]<<" ";
        }
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

    // taking input

    int r,c;
    cin>>r>>c;
    //declaring a double pointer to create a dynamic sized array

    int **matrix = new int *[r];
    for(int i=0;i<r;i++){
        matrix[i] = new int [c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    //we have to traverse till mid of the matrix
    //therfore from 0  to (c2+1)/2.
    int index =0;
    int r2=r;
    int c2=c;
    while(index<(c2+1)/2){
        Spiral(matrix,index,r,c);
        index++;    
        r--;
        c--;
    }
    
    
    
    
    
    
    
    
    
    
    

}