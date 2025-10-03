#include <stdio.h>

int main() {
    double a, b, c;
    printf("Введите длины ребер a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double V = a * b * c;  
    double S = 2 * (a * b + b * c + a * c);  

    printf("Объем V = %.2lf\n", V);
    printf("Площадь поверхности S = %.2lf\n", S);

    return 0;
}

