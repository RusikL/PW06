#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int vowels = 0, consonants = 0, other = 0;

    printf("Введите текст до #:\n");

    while ((ch = getchar()) != '#' && ch != EOF)
    {
        ch = tolower((unsigned char)ch);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a'  ch == 'e'  ch == 'i' ||
                ch == 'o'  ch == 'u'  ch == 'y')
                vowels++;
            else
                consonants++;
        }
        else
            other++;
    }

    printf("Гласные: %d\n", vowels);
    printf("Согласные: %d\n", consonants);
    printf("Остальные: %d\n", other);

    return 0;
}
