//Write a program to insert an element in an array at any position.
#include<stdio.h>
int main() {
    int size, pos, value;
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
    printf("Enter the position to insert an element: ");
    scanf("%d", &pos);
    if (pos < 0 || pos > size) {
        printf("Invalid position !");
        return 1;
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos]= value;
    size++;
    printf("The updated array is: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
