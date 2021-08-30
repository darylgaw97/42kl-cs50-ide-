#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    int i;
    char *str = "abcde";

    i = ft_str_is_lowercase(str);
    printf("%i", i);
}

int ft_str_is_lowercase(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            str++;
            continue ;
        }
        return (0);
    }
    return (1);
}
