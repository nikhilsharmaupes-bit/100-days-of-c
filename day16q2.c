#include <stdio.h>
int main() {
    int n,d,sum=0;
   
    printf("Enter an int... ");
    scanf("%d", &n);
     int temp=n;
    while (n>0)
    {
     d=n%10;
     sum=sum*10+d;
     n=n/10;
    }
    printf("reverse is=%d",sum);
    if(sum==temp)
    {
    printf("palingdrom");
    }
    else
    {
    printf("not");
     }
     return 0;
     }