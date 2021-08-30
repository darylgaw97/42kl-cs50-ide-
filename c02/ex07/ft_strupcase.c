#include <stdio.h>
#include <unistd.h>

char    *ft_strupcase(char *str);

int main(void)
{
    char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPRRSTUVWXYZ!@#$%^&*()_+-=,./<>?;:'{}[]| ";
    ft_strupcase(str);
    printf("%s", str);
}

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}
