#include <stdio.h>

// Structure definition
struct Point {
    int x;
    int y;
};

// Function to swap the fields of two Point structures using pointers
void swapPoints(struct Point* p1, struct Point* p2) {
    int tempX = p1->x;
    int tempY = p1->y;
    
    p1->x = p2->x;
    p1->y = p2->y;
    
    p2->x = tempX;
    p2->y = tempY;
}

int main() {
    // Create two Point structures
    struct Point point1 = {2, 3};
    struct Point point2 = {5, 7};
    
    printf("Before swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);
    
    // Call the swapPoints function and pass pointers to the structures
    swapPoints(&point1, &point2);
    
    printf("After swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);
    
    return 0;
}
