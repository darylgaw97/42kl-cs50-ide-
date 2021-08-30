#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str);

int main(void)
{
    int i;
    char *str;

    str = " !#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvw xyz{|}~\"";
    i = ft_str_is_printable(str);
    printf("%i\n", i);
}

int ft_str_is_printable(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 32 && *str <= 126)
        {
            str++;
            continue ;
        }
        return (0);
    }
    return (1);
}