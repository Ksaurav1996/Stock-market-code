#include <stdio.h>
int main(){

   int x;
    printf("Enter a numner:- ");
    scanf("%d", &x);
    if(x&1)
    printf("The number %d is an odd number", x);
    else
    printf("The number %d is an even number", x);

    
    return 0;
}