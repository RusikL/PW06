#include <stdio.h>
int main(void)
{
	int choice, a, b;
	int i, gcd, lcm, flag;
	while (1)
	{
		printf("2. Проверка на простоту\n");
		printf("3. НОД двух чисел\n");
		printf("4. НОК двух чисел\n");
		printf("5. Выход\n");
		printf("Выберите пункт: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			scanf("%d", &a);
			if (a % 2 == 0)
				printf("Четное число\n");
			else
				printf("Нечетное число\n");
			break;
		case 2:
			scanf("%d", &a);
			flag = 1;
			for (i = 2; i < a; i++)
			{
				if (a % i == 0)
					flag = 0;
			}
			if (a > 1 && flag == 1)
				printf("Простое число\n");
			else
				printf("Не простое число\n");
			break;

		case 3:
			scanf("%d %d", &a, &b);

			int x = a, y = b;

			while (y != 0)
			{
				int temp = y;
				y = x % y;
				x = temp;
			}
			printf("НОД = %d\n", x);
			break;

		case 4:
			scanf("%d %d", &a, &b);

			x = a;
			y = b;

			while (y != 0)
			{
				int temp = y;
				y = x % y;
				x = temp;
			}
			gcd = x;
			lcm = a * b / gcd;

			printf("НОК = %d\n", lcm);
			break;

		case 5:
			return 0;

		default:
			printf("Неверный пункт меню\n");
		}
	}
	return 0;
}