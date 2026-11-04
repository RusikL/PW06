#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	int count1 = 0, count2 = 0;
	int sum1 = 0, sum2 = 0;
	scanf("%d", &n);
	while (n  != 0)
	{
		int x = abs(n);
		int found = 0;
		while (x > 0)
		{
			if (x % 10 == 5)
			{
				found = 1;
			}
			x /= 10;
		}
		if (found == 1)
		{
			count1++;
			sum1 += n;
		}
		else
		{
			count2 2++;
			sum2 += n;
		}
		scanf("%d" & n);
	}
	printf("С цифрой 5: #d\n", count1);
	if (count1 > 0)
	{
		printf("Среднее: %.2f\n", (double)sum1 / count1);
	}
	printf("Без цифры 5: %d/n", count2);
	if (count2 > 0)
	{
		printf("Среднее: %.2f\n", (double)sum2 / count2);
	}
	return 0;
}