#include <stdio.h>

int main(){
    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=n;i>=1;i--){
        printf("%d\n", i);
    }
    return 0;
}