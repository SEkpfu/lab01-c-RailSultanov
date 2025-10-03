#include <stdio.h>

int main() {
    int num;

    printf("Введите четырёхзначное число: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) 
    {
        printf("Ошибка: число не является четырёхзначным.\n");
        return 1;
    }

    int first_digit = num / 1000;      
    int last_digit = num % 10;         

    printf("Первая цифра: %d\n", first_digit);
    printf("Последняя цифра: %d\n", last_digit);

    return 0;
}

