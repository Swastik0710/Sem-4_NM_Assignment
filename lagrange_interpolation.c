// Write a program to solve a problem using Lagrange's Interpolation method.
#include<stdio.h>
int main() {
    int n, i, j;
    float a, p, sum = 0;
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    float x[n], y[n];
    printf("Enter the value(s) of x: ");
    for (i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }
    printf("Enter the value(s) of y: ");
    for (j = 0; j < n; j++) {
        scanf("%f", &y[j]);
    }
    printf("Enter the interpolating point: ");
    scanf("%f", &a);
    for (i = 0; i < n; i++) {
        p = 1;
        for (j = 0; j < n; j++) {
            if (i != j) {
                p = (p*(a - x[j])/(x[i] - x[j]));
            }
        }
        sum += p*y[i];
    }
    printf("Final Sum is: %.2f.", sum);
    printf("\n");
    return 0;
}
