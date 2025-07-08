// Write a program to solve a problem using Euler's method.
#include<stdio.h>
#define f(x,y) (x+y)
int main() {
    float x0, y0, xn, h, yn, slope;
    int i, n;
    printf("Enter the value of x0: ");
    scanf("%f", &x0);
    printf("Enter the value of y0: ");
    scanf("%f", &y0);
    printf("Enter the value of xn: ");
    scanf("%f", &xn);
    printf("Enter the number of steps (n): ");
    scanf("%d", &n);
    h = (xn - x0) / n;
    printf("x0\t\t\ty0\t\t\tSlope\t\t\tyn\n");
    for (i = 0; i < n; i++) {
        slope = f(x0,y0);
        yn = y0 + (h * slope);
        printf("\n%.4f\t\t%.4f\t\t%.4f\t\t%.4f\n", x0, y0, slope, yn);
        y0 = yn;
        x0 = x0 + h;
    }
    printf("The value of y at x: %.2f is %.3f", xn, yn);
    printf("\n");
    return 0;
}
