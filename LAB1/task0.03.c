#include <stdio.h>

int main() {
    int num1, num2;
    int last_digit1, last_digit2, sum;

    printf("Введите два целых числа: ");
    scanf("%d %d", &num1, &num2);

    last_digit1 = num1 % 10;
    last_digit2 = num2 % 10;

    if (last_digit1 < 0) last_digit1 = -last_digit1;
    if (last_digit2 < 0) last_digit2 = -last_digit2;

    sum = last_digit1 + last_digit2;

    printf("Сумма последних цифр: %d\n", sum);

    return 0;
}


