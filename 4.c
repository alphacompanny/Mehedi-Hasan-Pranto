#include <stdio.h>

int main() {
    int a;

    printf("Enter your number: ");
    scanf("%d", &a);

    printf("Before: %d\n", a);
    printf("Using --a: %d\n", --a);
    printf("After: %d\n", a);

    return 0;
}
