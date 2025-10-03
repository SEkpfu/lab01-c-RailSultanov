#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    double r, h;
    printf("Введите радиус и высоту цилиндра: ");
    scanf("%lf %lf", &r, &h);

    double V = M_PI * r * r * h; 
    double S = 2 * M_PI * r * (r + h);  

    printf("Объем цилиндра V = %.2lf\n", V);
    printf("Площадь поверхности цилиндра S = %.2lf\n", S);

    return 0;
}

