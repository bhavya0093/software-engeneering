#include <stdio.h>

int main() {

    int arr1D[5];
    printf("Enter 5 integers for 1D array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1D[i]);
    }

    printf("\n1D Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }
    printf("\n");

    
    int arr2D[3][3], sum = 0;
    printf("\nEnter 9 integers for 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr2D[i][j]);
            sum += arr2D[i][j]; 
        }
    }

    printf("\n3x3 Matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr2D[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in 3x3 matrix: %d\n", sum);

    return 0;
}

