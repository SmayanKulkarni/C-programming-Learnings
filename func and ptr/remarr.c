#include <stdio.h>

void deleteElement(int arr[], int size, int position) {
    if (position < 0 || position >= size) {
        printf("Invalid position\n");
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int size, position;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int array[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    deleteElement(array, size, position);

    printf("Array after deletion:\n");
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    

    return 0;
}
