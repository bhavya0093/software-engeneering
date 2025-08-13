#include <stdio.h>

int main() {
    int a[3][3], b[3][3], result[3][3];
    int i, j, k;
    int choice;

    printf("Enter matrix size:\n");
    printf("2 for 2x2 addition\n");
    printf("3 for 3x3 multiplication\n");
    scanf("%d", &choice);

    if (choice == 2) {
        
        printf("Enter 4 elements of first 2x2 matrix:\n");
        for(i=0; i<2; i++) {
            for(j=0; j<2; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter 4 elements of second 2x2 matrix:\n");
        for(i=0; i<2; i++) {
            for(j=0; j<2; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        
        for(i=0; i<2; i++) {
            for(j=0; j<2; j++) {
                result[i][j] = a[i][j] + b[i][j];
            }
        }

        
        printf("Sum of 2x2 matrices:\n");
        for(i=0; i<2; i++) {
            for(j=0; j<2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }

    } else if (choice == 3) {
        
        printf("Enter 9 elements of first 3x3 matrix:\n");
        for(i=0; i<3; i++) {
            for(j=0; j<3; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter 9 elements of second 3x3 matrix:\n");
        for(i=0; i<3; i++) {
            for(j=0; j<3; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        
        for(i=0; i<3; i++) {
            for(j=0; j<3; j++) {
                result[i][j] = 0;
                for(k=0; k<3; k++) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        
        printf("Product of 3x3 matrices:\n");
        for(i=0; i<3; i++) {
            for(j=0; j<3; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("Invalid choice! Please enter 2 or 3.\n");
    }

    return 0;
}

