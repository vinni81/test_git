#include <stdio.h>
//#include <float.h>

//#include <math.h>
//#include <locale.h>
//#include <stdlib.h>



int main(int argc, char **argv) {
    int number;
    printf("enter three number: ");
    scanf("%d", &number);

    // Извлекаем цифры
    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    // Вычисляем произведение цифр
    int product = digit1 * digit2 * digit3;

    printf("product number: %d\n", product);

    return 0;
}

