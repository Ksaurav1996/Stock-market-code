#include <stdio.h>
main() {
    int n, position, element, i;
    printf("Enter the number of elements in the array:- ");
    scanf("%d", &n);
    int a[n+1];
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the position where you want to insert the element:- ");
    scanf("%d", &position);
    printf("Enter the element you want to insert: ");
    scanf("%d", &element);
    for (i = n; i >= position; i--) {
        a[i] = a[i-1];
    }
    a[position-1] = element;
    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
}
