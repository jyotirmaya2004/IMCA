#include <stdio.h>

// Function to calculate GCF using the Euclidean Algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate LCM using the relationship LCM = (a * b) / GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}