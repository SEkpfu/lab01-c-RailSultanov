#include <stdio.h>

int main() {
    double num1, num2;

    printf("Введите два числа: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Сумма: %.2lf\n", num1 + num2);
    printf("Разность: %.2lf\n", num1 - num2);
    printf("Произведение: %.2lf\n", num1 * num2);

    return 0;
}

