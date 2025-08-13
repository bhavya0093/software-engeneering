#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;              // last digit
        sum = sum + (digit * digit * digit); // cube of digit
        temp = temp / 10;               // remove last digit
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is NOT an Armstrong number.\n", num);
    }

    return 0;
}

