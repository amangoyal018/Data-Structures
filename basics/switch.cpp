#include<iostream>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int x;
    cin>>x;
    // cout<<x;

    
    switch (x)
    {
        x++;

    case 1:
    cout<<"hello"<<endl;
    break;

    case 2:
    cout<<"ohayogozaimas"<<endl;   //use of break is necessary
    break;

    default:
    cout<<"yhin tk tha safar apna "<<endl;
    break;
    }
    
    return 0;
    
}            