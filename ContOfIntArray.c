#include <stdio.h>

int main(){

    int i;
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements are : \n");

    for (i=0;i<n;i++) {
        printf("%d ", arr[i]);

    }
    return 0;
}
