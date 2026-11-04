#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int vowels = 0, consonants = 0, other = 0;
	while ((ch = getchar()) != '#')
	{
		ch = tolower(ch);
		if (isalpha(ch))
		{
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
			{
				vowels++;
			}
			else
			{
				consonants++;
			}
		}
		else
		{
			other++;
		}
	}
	printf("Гласные: %d\n", vowels);
	printf("Согласные: %d\n", consonants);
	printf("Остальные символы: %d\n", other);
	return 0;
}