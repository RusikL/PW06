#include <stdio.h>

int main(void)
{
    double energy, cost;

    printf("Введите расход электроэнергии: ");

    if (scanf("%lf", &energy) != 1)
    {
        printf("Ошибка! Нужно ввести число.\n");
        return 0;
    }

    if (energy < 0)
    {
        printf("Ошибка! Расход не может быть отрицательным.\n");
        return 0;
    }

    if (energy <= 100)
        cost = energy * 0.1;
    else if (energy <= 300)
        cost = 100 * 0.1 + (energy - 100) * 0.15;
    else
        cost = 100 * 0.1 + 200 * 0.15 +
               (energy - 300) * 0.2;

    printf("Стоимость: %.2f\n", cost);

    return 0;
}
