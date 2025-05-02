#include <stdio.h>

int main(){
    
    int i, sum=0;

    for(i=1;i<=10;i++) {
        printf("%d\n", i);
        sum += i;
    }

    printf("The sum of numbers from 1 to 10 is : %d", sum);

    return 0;
}
