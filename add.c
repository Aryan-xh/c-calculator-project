#include <stdio.h>

int main() {
    double a, b;
    printf("--- Addition ---\n");
    printf("Enter the two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
    return 0;
}
