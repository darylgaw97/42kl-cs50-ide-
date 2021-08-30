#include <stdio.h>
#include <unistd.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    int i;
    char *str = "0123456789";

    i = ft_str_is_numeric(str);
    printf("%i", i);
}

int ft_str_is_numeric(char *str)
{
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            str++;
            continue ;
        }
        return (0);
    }
    return (1);
}
