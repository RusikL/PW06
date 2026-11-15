#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int choice, a, b, x, y, temp;
    int i, flag, gcd, lcm;

    while (1)
    {
        printf("\n1. Четность\n");
        printf("2. Простое число\n");
        printf("3. НОД\n");
        printf("4. НОК\n");
        printf("5. Выход\n");
        printf("Выберите пункт: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Ошибка ввода!\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 5)
            break;

        if (choice < 1 || choice > 5)
        {
            printf("Неверный пункт!\n");
            continue;
        }

        printf("Введите первое число: ");

        if (scanf("%d", &a) != 1)
        {
            printf("Ошибка ввода!\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 3 || choice == 4)
        {
            printf("Введите второе число: ");

            if (scanf("%d", &b) != 1)
            {
                printf("Ошибка ввода!\n");
                while (getchar() != '\n');
                continue;
            }
        }

        switch (choice)
        {
            case 1:
                if (a % 2 == 0)
                    printf("Четное\n");
                else
                    printf("Нечетное\n");
                break;

            case 2:
                flag = 1;

                if (a < 2)
                    flag = 0;

                for (i = 2; i <= a / i && flag; i++)
                {
                    if (a % i == 0)
                        flag = 0;
                }

                if (flag)
                    printf("Простое\n");
                else
                    printf("Не простое\n");
                break;

            case 3:
                x = abs(a);
                y = abs(b);

                while (y != 0)
                {
                    temp = y;
                    y = x % y;
                    x = temp;
                }

                printf("НОД = %d\n", x);
                break;

            case 4:
                x = abs(a);
                y = abs(b);

                if (x == 0 || y == 0)
                {
                    printf("НОК = 0\n");
                    break;
                }

                int aa = x, bb = y;

                while (y != 0)
                {
                    temp = y;
                    y = x % y;
                    x = temp;
                }

                gcd = x;
                lcm = aa / gcd * bb;

                printf("НОК = %d\n", lcm);
                break;
        }
    }

    return 0;
}
