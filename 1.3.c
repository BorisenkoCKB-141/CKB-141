
#include <stdio.h>

/**
 * @brief Считывает число типа double
 * @return Введенное пользователем число
 */
double getDouble();

/**
 * @brief Вычисляет работу электрического тока
 * @param I Сила тока в амперах
 * @param U Напряжение в вольтах
 * @return Работа электрического тока в джоулях
 */
double Work(const double I, const double U);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    double I = 0.0;
    double U = 0.0;
    double A = 0.0;

    printf("Введите силу тока I: ");
    I = getDouble();

    printf("Введите напряжение U: ");
    U = getDouble();

    A = Work(I, U);

    printf("Работа электрического тока: %.2f Дж\n", A);

    return 0;
}

double getDouble()
{
    double value = 0.0;
    scanf("%lf", &value);
    return value;
}

double Work(const double I, const double U)
{
    return I * U * 1200.0;
}
