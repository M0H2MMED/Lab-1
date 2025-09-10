#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter 2 floating point numbers:\n");
    scanf("%f %f", &a, &b);
    printf("The sum = %.2f \nThe minus = %.2f\n", a+b, a-b);
}