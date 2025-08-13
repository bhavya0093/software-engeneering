#include <stdio.h>

int main() {
    int rows, i, j, val;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        val = 1; 
        
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}

