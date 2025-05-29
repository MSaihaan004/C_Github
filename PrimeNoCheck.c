#include <stdio.h>

int main(){
    int i, n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=2;i<=n;i++) {
        if (n%i==0) {
            printf("Entered no. is not a prime no.");
            break;
        }
        else {
            printf("Entered no. is a prime no.");
            break;
        }
    }
    return 0;
}