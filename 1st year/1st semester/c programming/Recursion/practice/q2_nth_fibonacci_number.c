#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num ;
    printf("Enter a number to find fibonacci : ");
    scanf("%d",&num);
    printf("Fibonacci number at position %d is %d\n", num, fibonacci(num));
    return 0;
}
