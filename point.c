#include "point.h"
#include <math.h>

Point point(int x, int y)
{
    Point p;
    p.x = x;
    p.y = y;
    return p;
}


int point_sontEgaux(Point p1, Point p2)
{
    return (p1.x == p2.x && p1.y == p1.y);
}

int point_estSuperieur(Point p1, Point p2)
{
    return (p1.x > p2.x || p1.y > p2.y);
}

int point_estInferieur(Point p1, Point p2)
{
    return (p1.x < p2.x || p1.y < p2.y);
}

double point_distance(Point p1, Point p2)
{
    return sqrt(pow((p2.x - p1.x),2)+pow((p2.y - p1.y),2));
}
