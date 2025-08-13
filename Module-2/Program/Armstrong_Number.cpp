#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0, temp;

    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int num;

    
    printf("Enter a number to check Armstrong: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    
    printf("\n between 1 and 1000 are:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

