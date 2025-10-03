 #include <stdio.h>

int main() {
    double tC, tF, tK;

    printf("Введите температуру в градусах Цельсия: ");
    scanf("%lf", &tC);

    tF = (9.0 / 5.0) * tC + 32;
    tK = tC + 273;

    printf("Температура в градусах Фаренгейта: %.2lf\n", tF);
    printf("Температура в градусах Кельвина: %.2lf\n", tK);

    return 0;
}

