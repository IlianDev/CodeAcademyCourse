/*
Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки. Използвайте malloc().
*/

#include<stdio.h>
#include<stdlib.h>

struct point{
    int x;
    int y;
};

struct point makepoint(int x, int y){
    struct point *p;
    p= malloc(sizeof(struct point));
    p->x = x;
    p->y = y;
    return *p;
};

int main()
{
    struct point aPoint = makepoint(3,4);
    printf("%d\t%d", aPoint.x, aPoint.y);

    // struct point *ptrPoint;
    // ptrPoint = &abort;

    // int dataX = ptrPoint -> x;
    // int dataY = ptrPoint -> y;
}

