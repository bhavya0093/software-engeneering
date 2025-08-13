#include <stdio.h>

int main() {
    int num, sum = 0, reverse = 0, digit;
    int org;

    printf("Enter an integer: ");
    scanf("%d", &num);

    org = num; 

    
    while (num != 0) {
        digit = num % 10;        
        sum += digit;            
        reverse = reverse * 10 + digit;  
        num = num / 10;          
    }

   
    printf("Sum of digits %d = %d\n", org, sum);
    printf("Reversed number %d = %d\n", org, reverse);

    return 0;
}

