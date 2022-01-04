
#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

extern const double circle_pi;

typedef struct 
{
    Point center;
    double radius;
}Circle;

double circle_init(Circle *_circle, Point *_center, double _radius);

double circle_area(Circle *_circle);

double circle_peri(Circle *_circle);

double circle_diam(Circle *_circle);

#endif

