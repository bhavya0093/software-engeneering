#include <stdio.h>

int getLen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void revStr(char str[]) {
    int len = getLen(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    revStr(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

