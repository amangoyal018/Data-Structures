#include <stdio.h>
int main(){
    static int x = 2;
    printf("%d",x);
    static int x = 3;
    printf("%d",x);
}