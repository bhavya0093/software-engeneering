#include <stdio.h>
#include <string.h>

int NumPalindrome(int num) {
    int original = num;
    int reversed = 0, digit;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed)
        return 1;
    else
        return 0;
}

int StrPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }

    return 1;
}

int main() {
    int number;
    char str[100];

    
    printf("Enter a number: ");
    scanf("%d", &number);

    if (NumPalindrome(number))
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    printf("\nEnter a string (no spaces): ");
    scanf("%s", str);

    if (StrPalindrome(str))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

