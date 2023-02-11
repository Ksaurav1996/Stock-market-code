#include <stdio.h>
int main(){
    int a, b;
    printf("Enter 2 numbers:- ");
    scanf("%d %d", &a, &b);
    a= a+b;
    b= a-b;
    a= a-b;

    /* firstly a= 20, b= 40
    then a+b= 60= a, b= 40
    then b= 60-40= 20, a= 60
    then a= 60- 20= 40, b= 20 */
    printf("a= %d, b= %d", a, b);
    return 0;
}