#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);

    int sum_squares = a*a + b*b + c*c;

    int result = (sum_squares % 2 != 0) ? sum_squares : max(a, c);

    printf("%d\n", result);

    return 0;
}


