#include <stdio.h>

int main () {
    const double PI = 3.14159;
    double r;
    
    printf("Введите радиус шара: ");
    scanf("%lf", &r);
    
    double V = (4.0/3.0) * PI * r * r * r;

    printf("Объум шара V = %.5LF", V);

    return 0;




}
