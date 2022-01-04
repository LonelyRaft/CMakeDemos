
#include <math.h>
#include "rect.h"

double rect_init(Rect *_rect, Point *_lu, Point *_rd)
{
    double width;
    double height;
    _rect->lu = *_lu;
    _rect->rd = *_rd;
    width = _rect->lu.x - _rect->rd.x;
    height = _rect->lu.y - _rect->rd.y;
    _rect->width = width > 0 ? width : 0 - width;
    _rect->height = height > 0 ? height : 0 - height;
    return 0;
}

double rect_area(Rect *_rect)
{
    return _rect->width * _rect->height;
}

double rect_peri(Rect *_rect)
{
    return 2 * (_rect->width + _rect->height);
}

double rect_diam(Rect *_rect)
{
    return sqrt(_rect->width * _rect->width + _rect->height * _rect->height);
}

