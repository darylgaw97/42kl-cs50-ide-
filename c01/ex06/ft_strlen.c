#include <unistd.h>
#include <stdio.h>

int    ft_strlen(char *str);

int main(void)
{
    int i;
    char *str;

    str = "42KL";
    i = ft_strlen(str);
    printf("%i", i);
    return (0);
}

int    ft_strlen(char *str)
{
    int length;

    length = 0;
    while (str[length])
        length++;
    return (length);
}