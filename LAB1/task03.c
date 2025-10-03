#include <stdio.h>  
    int main() {  
    double x, y, a, b;  

    printf("Введите количество кг шоколадных конфет и их стоимость: ");  
    scanf("%lf %lf", &x, &a);  
    printf("Введите количество кг ирисок и их стоимость: ");  
    scanf("%lf %lf", &y, &b);  
 
    double price_chocolate_per_kg = a / x;  
    double price_toffees_per_kg = b / y;  

    printf("\nСтоимость 1 кг шоколадных конфет: %.2f рублей\n", price_chocolate_per_kg);  
    printf("Стоимость 1 кг ирисок: %.2f рублей\n", price_toffees_per_kg);  

    double ratio = price_chocolate_per_kg / price_toffees_per_kg;  
    printf("\nШоколадные конфеты дороже ирисок в %.2f раз\n", ratio);  
      
    return 0;  
}  