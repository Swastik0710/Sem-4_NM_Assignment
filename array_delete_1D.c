////Write a program to delete an element in an array at any position.
#include<stdio.h>
int main() {
    int size, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the position to delete the element: ");
    scanf("%d", &pos);
    if (pos < 0 || pos > size) {
        printf("Invalid position !");
        return 1;
    }
    for (int i = pos; i < size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;
    printf("The updated array after deletion is: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
