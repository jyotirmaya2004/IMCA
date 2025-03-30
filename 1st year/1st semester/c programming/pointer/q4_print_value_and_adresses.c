#include <stdio.h>
int main() {
    int a = 7;
    int *p = &a;
    printf("Address: %p, Value: %d\n", p, *p);
    return 0;
}
