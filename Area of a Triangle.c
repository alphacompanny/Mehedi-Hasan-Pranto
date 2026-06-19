#include <stdio.h>

int main()
{
    float A, B, area;

    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &A, &B);

    area = 0.5 * A * B;
    printf("Area of the triangle is: %.2f\n", area);

    return 0;
}
