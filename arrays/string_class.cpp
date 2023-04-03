#include<bits/stdc++.h>
using namespace std;

void find_index(string str,string sub){
    int found=str.find(sub);
    while(found!= string::npos){
        cout<<found<<endl;
        found=str.find(sub,found+1);
    }
}



int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // string str;
    // cin>>str;
    // int len=str.length();
    // string rev;

    // for(int i=str.length()-1;i>=0;i--){
    //     rev+=str[i];
    // }
    // if(rev==str){
    //     cout<<"yes";
    // }else{
    //     cout<<"no";
    // }
    



    
    // return 0;
    string str,sub;
    cin >>str>>sub;

    find_index(str,sub);
    

}            