#include <stdio.h>


int fibonacci_rec(int n) ;
int fibonacci_ite(int n) ;

int main() {
    int n, i;

    printf("Enter how many terms: ");
    scanf("%d", &n);

    printf("\nFibonacci sequence:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci_rec(i));
    }

    printf("\n\nNth Fibonacci number : %d", fibonacci_rec(n));
    printf("\nNth Fibonacci number: %d\n", fibonacci_ite(n));

    return 0;
}
int fibonacci_rec(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}
int fibonacci_ite(int n) {
    int a = 0, b = 1, next, i;
    
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

