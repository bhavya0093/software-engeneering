#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first value: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter second value: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    strcat(str1, str2); 
    printf("\nConcatenated String: %s\n", str1);
    printf("Length of string: %lu\n", strlen(str1));

    return 0;
}

