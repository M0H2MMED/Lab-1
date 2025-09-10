#include <stdio.h>
int main()
{
    float a;
    printf("Enter the temperature (°C): ");
    scanf("%f", &a);
    printf("Equivalent temperature in Fahrenheit: %.2fF\n", (a*9/5)+32);
}