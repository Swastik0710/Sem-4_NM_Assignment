// Write a program to solve a problem using Regula Falsi method.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((x*x*x)-(9*x)+1)
float main() {
    float a, b, c, h, x;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    if (f(a) * f(b) > 0) {
        exit(0);
    }
    else {
        do {
            c = a - ((f(a) * (b - a)) / (f(b) - f(a)));
            if (f(c) > 0) {
                a = c;
            }
            else {
                b = c;
            }
            h = a - ((f(a) * (b - a)) / (f(b) - f(a)));
            printf("The value of h is %f.\n", h);
        } while (fabs (h - c) > 0.0001);
        printf("The final value of h is %f.\n", h);
    }
    return 0;
}
