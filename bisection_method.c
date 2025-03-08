// Write a program to solve a problem using Bisection method.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((x*x*x)-x-4)
float main() {
    float a, b, c, h;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    if (f(a) * f(b) > 0) {
        exit(0);
    }
    else {
        do {
            c = (a + b) / 2;
            if (f(c) < 0) {
                a = c;
            }
            else {
                b = c;
            }
            h = (a + b) / 2;
        } while (fabs (h - c) > 0.0001);
    }
    printf("Result is %.6f", h);
    printf("\n");
    return 0;
}
