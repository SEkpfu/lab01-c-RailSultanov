#include <stdio.h>
int main (void) {
    double f; 
    int h, m;   
    printf("Введите угол поворота f (в градусах): ");  
    scanf("%lf", &f); 
    h = (int)(f / 30);  
    m = (int)((f - h * 30) * 2);   
    printf("Текущее время: %d часов %d минут\n", h, m);  
      
    return 0;  
}