#include <stdio.h>

int main() {
    int N;
    printf("Введите количество секунд с начала суток: ");
    scanf("%d", &N);

    int hours = N / 3600;          // количество полных часов
    int minutes = (N % 3600) / 60; // количество полных минут после часов
    int seconds = N % 60;          // остаток секунд

    printf("Часы: %d, Минуты: %d, Секунды: %d\n", hours, minutes, seconds);

    return 0;
}

