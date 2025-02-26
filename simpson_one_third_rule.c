// Write a program to solve a problem using Simpson's (1/3)rd rule.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (1/(1+(x*x)))
float main() {
    int i, n;
    float a, b, h, x[100], y[100], sum, sum_even, sum_odd;
    printf("Enter the upper limit: ");
    scanf("%f", &b);
    printf("Enter the lower limit: ");
    scanf("%f", &a);
    printf("Enter the number of intervals: ");
    scanf("%d", &n);
    h = ((b - a) / n);
    if (n % 2 != 0) {
        exit(0);
    }
    else {
        for (i = 0; i <= n; i++) {
            x[i] = a + (i * h);
            y[i] = f(x[i]);
        }
    }
    sum = 0, sum_even = 0, sum_odd = 0;
    for (i = 1; i <= n - 1; i++) {
        if (i % 2 == 0) {
            sum_even = sum_even + y[i];
        }
        else {
            sum_odd = sum_odd +y[i];
        }
    }
    sum = ((h / 3) * (y[0] + y[n] + (4 * sum_odd) + (2 * sum_even)));
    printf("The final sum is: %.4f", sum);
    printf("\n");
    return 0;
}
