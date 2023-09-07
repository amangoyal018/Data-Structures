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
    for(int i = start ; i <= end1 - 1; i++){
        if(i!=start){
            if(start!=end1-1 and i==end1-1){
                continue;
            }
            cout<<matrix[i][end2-1]<<" ";
            continue;
        }
        for(int j = start; j < end2;j++){
            cout<<matrix[i][j]<<" ";
        }

    }

    for(int i= end1 - 1; i>start;i--){
        if(i!=end1-1){
            if(start==end2-1){
                continue;
            }
            cout<<matrix[i][start]<<" ";
            continue;
        }
        for(int j=end2-1;j>=start;j--){
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

    int r,c;
    cin>>r>>c;
    

    int **matrix = new int *[r];
    for(int i=0;i<r;i++){
        matrix[i] = new int [c];
    }
    // cout<<matrix[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    int index =0;
    int r2=r;
    int c2=c;
    while(index<(min((r2+1)/2,(c2+1)/2))){
        // cout<<"hello";
        
        Spiral(matrix,index,r,c);
        index++;
        // if(index+1==min(c,r)){
        //     break;
        // }
        r--;
        c--;
    }
    // Spiral(matrix,0,10,2);
    // Spiral(matrix,1,4,4);
    // Spiral(matrix,2,3,3);

    
    
    
    
    
    
    
    
    
    

}