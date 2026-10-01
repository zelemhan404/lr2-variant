#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    float X = 15.5;
    float S = 120.0;
    float L = 150.0;

    float L_meters;
    float length;
    float cost;


    L_meters = L / 100.0;
    length = S / L_meters;
    cost = length * X;


    printf("Исходные данные:\n");
    printf("Цена за погонный метр: %.2f золотых\n", X);
    printf("Площадь парусов: %.2f м\n", S);
    printf("Ширина ткани: %.2f см (%.2f м)\n\n", L, L_meters);

    printf("Результаты:\n");
    printf("Необходимая длина ткани: %.2f м\n", length);
    printf("Общая стоимость: %.2f золотых\n", cost);

    return 0;
}