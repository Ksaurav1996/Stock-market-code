#include <stdio.h>
main() {
    int n, position, i;
    printf("Enter the number of elements in the array:- ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:-\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the position of the element you want to delete:- ");
    scanf("%d", &position);
    for (i = position-1; i < n-1; i++) {
        a[i] = a[i+1];
    }
    printf("Array after deletion: ");
    for (i = 0; i < n-1; i++) {
        printf("%d ", a[i]);
    }
}