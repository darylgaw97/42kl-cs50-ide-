#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src);
char    *ft_strcpy(char *dest, char *src);
int ft_strlen(char *str);

int main(void)
{
    char *src;

    src = "abcde";
    printf("%s", ft_strdup(src));
}

char *ft_strdup(char *src)
{
    char *dest;

    dest = malloc(ft_strlen(src) + 1);
    if (dest == NULL)
        return (0);
    return (ft_strcpy(dest, src));
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int ft_strlen(char *str)
{
    int length;

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return (length);
}