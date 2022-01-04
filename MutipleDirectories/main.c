
#include <stdio.h>
#include "circle.h"
#include "rect.h"

int main(int argc, char const *argv[])
{
    Circle circle;
    Rect rect;
    Point a = {0, 0};
    Point b = {1, 1};
    circle_init(&circle, &a, 1);
    rect_init(&rect, &a, &b);
    printf("Circle:\n\tArea %.3f\n\tPeri %.3f\n",
           circle_area(&circle), circle_peri(&circle));
    printf("Rect:\n\tArea %.3f\n\tPeri %.3f\n",
           rect_area(&rect), rect_peri(&rect));
    return 0;
}
