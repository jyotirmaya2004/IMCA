#include <stdio.h>
void factorial(int n, int *fact) {
    *fact = 1;
    for (int i = 1; i <= n; i++)
        *fact *= i;
}
int main() {
    int num = 5, fact;
    factorial(num, &fact);
    printf("Factorial: %d\n", fact);
    return 0;
}
