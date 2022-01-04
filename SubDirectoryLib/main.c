
#include <stdio.h>
#include "point.h"

int main(int argc, char const *argv[])
{
    Point a;
    Point b;
    point_init(&a);
    printf("Point (A, %.3f, %.3f)\n", a.x, a.y);
    b.x = 1;
    b.y = 1;
    printf("Point Dist(A, B, %.3f)\n", point_dist(&a, &b));
    return 0;
}
