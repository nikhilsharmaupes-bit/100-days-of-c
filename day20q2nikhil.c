#include <stdio.h>

int main() {
    int binary, digit, ones_complement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while (binary > 0) {
        digit = binary % 10;
        if (digit == 0) {
            ones_complement += 1 * place;
        }
        binary /= 10;
        place *= 10;
    }
    printf("1's Complement = %d\n", ones_complement);
    return 0;
}