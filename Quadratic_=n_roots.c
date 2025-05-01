#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d;
    float r1, r2, real, imaginary;

    printf("Enter the coefficient a : ");
    scanf("%f", &a);
    printf("Enter the coefficient b : ");
    scanf("%f", &b);
    printf("Enter the coefficient c : ");
    scanf("%f", &c);

    d = b * b - 4 * a * c;

    if (d>0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are real and distinct\n");
        printf("The value of r1 is : %f\n", r1);
        printf("The value of r2 is : %f", r2);
    }

    else if (d==0) {
    r1 = r2 = -b / 2 * a;
    printf("The roots are real and equal\n");
    printf("The value of r1 is : %f\n", r1);
    printf("The value of r2 is : %f", r2);
    }

    else {
        real = -b / (2 * a);
        imaginary = sqrt(-d) / (2 * a);
        r1 = real + imaginary;
        r2 = real - imaginary;
        printf("The roots are unreal\n");
        printf("The value of r1 is : %f + %fi\n", real, imaginary);
        printf("The value of r2 is : %f", real, imaginary);
    }

    return 0;

}
