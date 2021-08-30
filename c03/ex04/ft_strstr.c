#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);
int ft_strlen(char *str);

int main(void)
{
    char *str;
    char *to_find;

    str = "guacamole is very lag";
    to_find = "is";
    printf("%s\n", ft_strstr(str, to_find));
}

char *ft_strstr(char *str, char *to_find)
{
    int i;
    if (ft_strlen(to_find) == 0)
        return (str);
    while (*str != '\0')
    {
        if (*str == *to_find)
        {
            i = 0;
            while (str[i] == to_find[i] && to_find[i] != '\0')
                i++;
            if (i == ft_strlen(to_find))
                return (str);
        }
        str++;
    }
    return (NULL);
}

int ft_strlen(char *str)
{
    int i;
    int str_length;

    i = 0;
    str_length = 0;
    while (str[i] != '\0')
    {
        str_length++;
        i++;
    }
    return (str_length);
}


