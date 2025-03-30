#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Point createPoint(int x, int y) {
    struct Point p = {x, y};
    return p;  // Return struct
}

int main() {
    struct Point p = createPoint(10, 20);
    printf("Point: (%d, %d)\n", p.x, p.y);  // Output: Point: (10, 20)
    return 0;
}