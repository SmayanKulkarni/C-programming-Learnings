#include <stdio.h>

// Function to swap two integers using call by reference
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function with addresses of num1 and num2
    swap(&num1, &num2);

    printf("After swapping (call by reference): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
