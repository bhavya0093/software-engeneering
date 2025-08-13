#include <stdio.h>


int fact_rec(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact_rec(n - 1);
}


int fact_ite(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial using Recursion = %d", fact_rec(num));
    printf("Factorial using Iteration = %d\n", fact_ite(num));

    return 0;
}

