//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum=%d, Diff=%d, Product=%d", a + b, a - b, a * b);
    if (b != 0) {
        printf(", Quotient=%d", a / b);
    } else {
        printf(", Quotient=undefined (division by zero)");
    }
    return 0;
}