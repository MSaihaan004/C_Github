#include <stdio.h>
int main() {
    int i, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n); 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    printf("Array elements in reverse are:\n");
    for (i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
