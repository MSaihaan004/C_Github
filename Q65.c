// Swap Two Numbers Using Call-by-Reference
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 5, y = 10;

    printf("Before Swap: x = %d, y = %d\n", x, y);

    // Calling swap function with addresses
    swap(&x, &y);

    printf("After Swap: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
