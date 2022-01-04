
#ifndef POINT_H
#define POINT_H

typedef struct
{
    double x;
    double y;
} Point;

void point_init(Point *_p);

Point *point_add(Point *_a, Point *_b);

Point *point_sub(Point *_a, Point *_b);

Point *point_set(Point *_a, Point *_b);

double point_dist(Point *_a, Point *_b);

#endif
