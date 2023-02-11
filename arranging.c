#include <stdio.h>
 main() {
    int i, n, a[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int j, temp;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
 }
