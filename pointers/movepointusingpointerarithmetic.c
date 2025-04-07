#include <stdio.h>

// Structure representing a point in 2D space
typedef struct {
    int x;
    int y;
} Point;

// Function to move the point using pointer arithmetic
void movePoint(Point *p, int dx, int dy) {
    int *coord = (int *)p;  // Treat point as pointer to first int (x)
    *coord += dx;           // Move x
    *(coord + 1) += dy;     // Move y
}

int main() {
    Point p = {2, 3};

    printf("Original Point: (%d, %d)\n", p.x, p.y);

    movePoint(&p, 1, -1);  // Move by (1, -1)

    printf("Moved Point:    (%d, %d)\n", p.x, p.y);

    return 0;
}
