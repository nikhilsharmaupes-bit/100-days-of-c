#include <stdio.h>

int main() {
    int number, is_prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    return 0;
}