#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
int    ft_strlen(char *dest);

int main(void)
{
    char dest[200] = "Hello";
    char *src = "World";
    int nb = 4;
    printf("%s\n", ft_strncat(dest, src, nb));
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int dest_length;

    i = 0;
    dest_length = ft_strlen(dest);
    while (i < nb && src[i] != '\0')
    {
        dest[dest_length + i] = src[i];
        i++;
    }
    dest[dest_length + i] = '\0';
    return (dest);
}

int    ft_strlen(char *dest)
{
    int length;

    length = 0;
    while (dest[length] != '\0')
    {
        length++;
    }
    return (length);
}