#include<bits/stdc++.h>
using namespace std;



int main(){
    int x,y;
    cin>>x>>y;
    
    cout<<"1 for  add"<<endl;
    cout<<"2 for  subtract"<<endl;
    cout<<"3 for  multiply"<<endl;
    cout<<"4 for  divide"<<endl;




    
    int z;
    cin>> z;
    switch(z){
    case 1:
    cout<<x+y<<endl;
    break;

    case 2:
    cout<<x-y<<endl;   //use of break is necessary
    break;

    case 3:
    cout<<x*y<<endl;   //use of break is necessary
    break;

    case 4:
    cout<<x/y<<endl;   //use of break is necessary
    break;

    default:
    cout<<"error"<<endl;
    break;
}
    


    
    
    

}            