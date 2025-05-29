#include <stdio.h>

int main(){

    int i, n;
    int base = 2;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("The seies is:");
    for (i=1; i<=n; i++) {
        printf("%d ", base);
        base = base * 2;
    }
    return 0;
}
