#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  
    
    
    int sum = 0;
    float average;

   
    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

   
    average = (float)sum / n;

    
    printf("Sum of array elements = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

