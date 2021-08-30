#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    int i;
    char *str = "aBcDe";

    i = ft_str_is_alpha(str);
    printf("%i", i);
}

int ft_str_is_alpha(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            str++;
            continue ;
        }
        if (*str >= 'a' && *str <= 'z')
        {
            str++;
            continue ;
        }
        return (0);
    }
    return (1);
}
