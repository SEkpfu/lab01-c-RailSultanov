#include <stdio.h>  
  
int main() {  
    double x, x2, x4, x5, x14, y;  

    printf("Введите значение x: ");  
    scanf("%lf", &x);  

    x2 = x * x;  

    x4 = x2 * x2;  
      
    x5 = x4 * x;  
 
    double x10 = x5 * x5;  

    x14 = x10 * x4;  

    y = x14 - x5 + x2 - 2;  
      
    printf("Результат: y = %.2lf\n", y);  
      
    return 0;  
}  
