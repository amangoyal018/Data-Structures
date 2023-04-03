
#include <iostream>
#include <string>
using namespace std;
void demo()
{
    // static variable
    static int count = 0;
    cout << count << " ";
    // value is updated and
    // will be carried to next
    // function calls
    count++;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    // static int x=0;
    // x++;
    // static int x=0;         //this giving error
    // cout<<x;


    for(int i=0;i<2;i++){
        static int x=0;     //this is not
        cout<<x;
        x++;
        
    }
    // for (int i=0; i<5; i++){
    //     demo();

    // }    
        
    // return 0;
}

