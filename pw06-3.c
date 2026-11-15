#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, x, found;
    int count1 = 0, count2 = 0;
    double sum1 = 0, sum2 = 0;

    while (1)
    {
        printf("Введите число (0 - выход): ");

        if (scanf("%d", &n) != 1)
        {
            printf("Ошибка! Введите число.\n");
            while (getchar() != '\n');
            continue;
        }

        if (n == 0)
            break;

        x = abs(n);
        found = 0;

        while (x > 0)
        {
            if (x % 10 == 5)
                found = 1;

            x /= 10;
        }

        if (found)
        {
            count1++;
            sum1 += n;
        }
        else
        {
            count2++;
            sum2 += n;
        }
    }

    printf("С цифрой 5: %d\n", count1);
    printf("Без цифры 5: %d\n", count2);

    if (count1 > 0)
        printf("Среднее: %.2f\n", sum1 / count1);

    if (count2 > 0)
        printf("Среднее: %.2f\n", sum2 / count2);

    return 0;
}
