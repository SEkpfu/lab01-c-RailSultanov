#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    double a, b, c;
    
    printf("Введите длины сторон \n");
    printf("a=");
    scanf("%lf" , &a);
    printf("b=");
    scanf("%lf" , &b);

    c = a * b;

    printf("c = %lf", c);

    return 0;



}