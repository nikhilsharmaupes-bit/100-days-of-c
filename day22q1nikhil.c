#include <stdio.h>

int main() {
    int num, original_num, digit, sum = 0, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    original_num = num;
    while (num > 0) {
        digit = num % 10;
        factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    } 
    if (sum == original_num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }  
    return 0;
}
