 #include <stdio.h>
 
 int main() {
        int num, digit, maxDigit = 0, maxCount = 0;
        int count[10] = {0}; 
        

        scanf("%d", &num);
        
        
        while(num > 0) {
            digit = num % 10;
            count[digit]++;
            num /= 10;
        }
        
        
        for(digit = 0; digit < 10; digit++) {
            if(count[digit] > maxCount) {
                maxCount = count[digit];
                maxDigit = digit;
            }
        }
        
        
        printf("%d\n", maxDigit);  
    return 0;
 }