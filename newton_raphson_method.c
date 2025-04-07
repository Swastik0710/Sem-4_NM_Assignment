// Write a program to solve a problem using Newton- Raphson method.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((x*x*x*x)-x-10)
#define df(x) ((4*x*x*x)-1)
int main() {
    float a, b, x, e;
    printf("Enter initial guess: ");
    scanf("%f", &a);
    printf("Enter desired accuracy (epsilon): ");
    scanf("%f", &e);
    do {
        b = a;
        x = a - f(a) / df(a);
        printf("Current approximation: %f\n", x);
        a = x;
    } while (fabs (b - a) > e);
    printf("Root of the equation: %f\n", x);
    return 0;
}
