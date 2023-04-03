#include<iostream>
#include<cmath>
using namespace std;

// int binary_to_decimal(int n){
//     int a=1;              //2 ki power
//     int number=0;
//     while(n>0){
//         int b=n%10;
//         number+=b*a;
//         a=a*2;
//         n=n/10;
//     }
//     return number;
// }

// int octal_to_decimal(int n){
//     int c=1;
//     int number=0;
//     while(n>0){
//         int d=n%10;
//         number+=d*c;
//         c=c*8;
//         n=n/10;
//     }
//     return number;
// 
// }
// int hexal_to_decimal(string s)
//     {
//         int number = 0;
//         int base = 1;
        
//         int size = s.size();
//         for (int i= size - 1;i>=0;i--)
//         {
//             if(s[i] >= '0' && s[i] <= '9')
//             {
//                 number += base*((s[i])-'0');
//             }else
//             {
//                 number += base*(s[i]-'A' + 10);
//             }
//             base=base*16;
//         }
//         return number;
//     }



// int decimal_to_binary(int n){
//     int number=0;
//     int base=1;
//     int s=0;
//     while(n>base){
//         s+=1;
//         base=base*2;
//     }
//     for(int i=s-1;i>=0;i--){
//         int a=pow(2,i);
//         if (n<a){
            
//             continue;
//         }else{
//             n-=a;
//             number+=round(pow(10,i));
//         }
//     }
//     return number;


// }
int decimal_to_binary2(int n){
    int  number=0;
    int s=0;


    while (n>0){
        int digit=n&1;
        int answer=digit
        n>>1;

        
        

    }
    return number;
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int bin;
    cin>>bin;
    cout<<decimal_to_binary2(bin);



}            