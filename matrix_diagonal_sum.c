//Write a program to find the sum of the diagonal elements of a matrix.
#include<stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);
    int array[n][n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    printf("The elements of the 2D array are:");
    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        sum += array[i][i];
    }
    printf("The sum of the diagonal elements of the matrix is %d.", sum);
    return 0;
}
