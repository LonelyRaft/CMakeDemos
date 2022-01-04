
#include <math.h>
#include "point.h"

void point_init(Point *_p)
{
    if (0 == _p)
        return;
    _p->x = _p->y = 0;
}

Point *point_add(Point *_a, Point *_b)
{
    if (0 == _a || 0 == _b)
        return 0;
    _a->x += _b->x;
    _a->y += _b->y;
    return _a;
}

Point *point_sub(Point *_a, Point *_b)
{
    if (0 == _a || 0 == _b)
        return 0;
    _a->x -= _b->x;
    _a->y -= _b->y;
}

Point *point_set(Point *_a, Point *_b)
{
    if (0 == _a || 0 == _b)
        return 0;
    _a->x = _b->x;
    _a->y = _b->y;
}

double point_dist(Point *_a, Point *_b)
{
    if (0 == _a || 0 == _b)
        return -1;
    return sqrt((_a->x - _b->x) * (_a->x - _b->x) + (_a->y - _b->y) * (_a->y - _b->y));
}
