#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;
    printf("%d %d\n", *p, *(p+1)); // Access next element
    return 0;
}
