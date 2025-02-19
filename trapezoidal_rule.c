// Write a program to solve a problem using Trapezoidal rule.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (1/(1+(x*x)))
int main() {
    float a, b, h, x[100], y[100], temp, sum = 0;
    int i, n;
    printf("Enter the upper limit: ");
    scanf("%f", &b);
    printf("Enter the lower limit: ");
    scanf("%f", &a);
    printf("Enter the number of intervals: ");
    scanf("%d", &n);
    h = ((b - a) / n);
    for (i = 0; i <= n; i++) {
        x[i] = a + (i * h);
        y[i] = f(x[i]);
    }
    for (i = 1; i <= n - 1; i++) {
        temp = y[i] + temp;
    }
    sum = ((h / 2) * (y[0] + y[n] + 2 * temp));
    printf("The final value is: %.4f", sum);
    printf("\n");
    return 0;
}
