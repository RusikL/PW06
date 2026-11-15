#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

int main(void)
{
    wint_t ch;
    int count = 0;

    setlocale(LC_ALL, "");

    printf("Введите текст до #:\n");

    while ((ch = getwchar()) != L'#' && ch != WEOF)
    {
        if (iswpunct(ch))
            count++;
    }

    printf("Знаков препинания: %d\n", count);

    return 0;
}
