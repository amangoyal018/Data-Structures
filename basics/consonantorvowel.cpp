#include<iostream>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE                          //yet to understand
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    char c;
    cin>>c;

    string d="aeiouAEIOU";
    //cout<<d[2]<<endl;// to print letter at index 2
    //cout<<d.find(c)<<endl;

    if (d.find(c)<d.length()){
        cout<<"vowel"<<endl;

    }else {
        cout<<"consonant"<<endl;
    }
        
    






}