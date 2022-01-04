
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

typedef struct
{
    Point lu;
    Point rd;
    double width;
    double height;
}Rect;

double rect_init(Rect *_rect, Point* _lu, Point *_rd);

double rect_area(Rect *_rect);

double rect_peri(Rect *_rect);

double rect_diam(Rect *_rect);

#endif


