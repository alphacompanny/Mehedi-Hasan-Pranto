#include <stdio.h>

int main()
{
    float r, A;
    float pi = 3.1416;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    A = pi * r * r;
    printf("Area of the circle is: %.2f\n", A);

    return 0;
}
