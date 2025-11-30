#include<stdio.h>
int main() {
    int n1, n2, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    i = 1;
    while (i <= n1 * n2)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            printf("LCM = %d\n", i);
            break;
        }
        i++;
    }
    return 0;
}