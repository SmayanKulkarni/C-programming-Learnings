#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    int sourceArray[] = {1, 2, 3, 4, 5};
    int destinationArray[5]; // Creating an empty array to store copied elements

    int size = sizeof(sourceArray) / sizeof(sourceArray[0]); // Calculating the size of the array
    printf("%d\n", size);

    copyArray(sourceArray, destinationArray, size); // Calling the function to copy

    printf("Source Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sourceArray[i]); // Printing the elements of the source array
    }
    printf("\n");

    printf("Copied Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]); // Printing the elements of the copied array
    }
 

    return 0;
}
