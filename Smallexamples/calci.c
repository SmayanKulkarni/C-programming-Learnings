#include <stdio.h>

int main() {
    int num, reverse = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reverse);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
