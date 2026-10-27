#include <stdio.h>
#include <math.h>

/**
 * @brief Переводит граммы в унции
 * @param gramm граммы
 * @return Значение после перевода 
 */
double onunce(const double gramm);

/**
 * @brief Принимает значение граммов и делением на 28.3 переводит его в унции
 * @return Считанное значение в унциях
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */

 double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double gramm = getWeight();
    
    printf("В унциях это %lf\n",ounce(gramm));
    
    return 0;
}

double ounce(const double gramm)
{
    return gramm/28.3;
}

double getDouble()
{
    double value = 0.0;
    scanf("%lf",&value);
    return value;
}
double getWeight()
{
    double weight = 0.0;
    printf("введите количество граммов\n");
    weight = getDouble();
    return weight
}
