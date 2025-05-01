#include <stdio.h>

int main(){

    float celcius,fahrehiet;

    printf("Enter the temperature in celcius : ");
    scanf("%f", &celcius);

    fahrehiet = (1.8*celcius) + 32;

    printf("The tempearture in fahrenhiet is : %.2f" , fahrehiet);

    return 0;
}

