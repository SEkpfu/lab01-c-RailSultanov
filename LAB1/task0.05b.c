#include <stdio.h>

#define _USE_MATH_DEFIENES
#include <math.h>

int main()
{
    double radius, length, area;

    printf("Введите площадь S= ");
    scanf("%lf", &area);

    radius = sqrt(area / M_PI);
    length = 2.0 * M_PI *radius;

    printf("радиус = %f\n" , radius);
    printf("длина окружности = %f" , length);

    return 0;




}