#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

int main(void)
{
	wint_t ch;
	int count = 0;
	setlocale(LC_ALL, "");
	while ((char = getwchar()) != L'#')
	{
		if (ispunct(ch))
		{
			count++;
		}
	}
	printf("Количество знаков препинания: %d\n", count);

	return 0;

}