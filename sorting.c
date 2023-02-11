#include <stdio.h>
 main(){
    int a, i, j, k;
    printf("Enter the number of elements in array:- ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of array:- ");
    for (i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < a; i++) {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j]<k){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
    printf("The sorted array is:- ");
    for (i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
}
