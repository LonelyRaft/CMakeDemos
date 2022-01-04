
#include "circle.h"

const double circle_pi = 3.1415926;

double circle_init(Circle *_circle, Point *_center, double _radius)
{
    _circle->center = *_center;
    _circle->radius = _radius;
    return 0;
}

double circle_area(Circle *_circle)
{
    return circle_pi * (_circle->radius) * (_circle->radius);
}

double circle_peri(Circle *_circle)
{
    return 2 * circle_pi * _circle->radius;
}

double circle_diam(Circle *_circle)
{
    return 2 * _circle->radius;
}
