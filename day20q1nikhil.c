#include <stdio.h>

int main() {
    int num, digit, product = 1, has_odd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) { 
            product *= digit;
            has_odd = 1;
        }
        num /= 10;

    }
    if (!has_odd) {
        product = 1; 
    }
    printf("Product of odd digits = %d\n", product);
    return 0;
}