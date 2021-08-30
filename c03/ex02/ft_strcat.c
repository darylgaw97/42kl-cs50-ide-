#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);
int    ft_strlen(char *src);

int main(void)
{
    char dest[1000] = "Hello ";
    char *src = "World";
    
    printf("%s\n", ft_strcat(dest, src));
}

char *ft_strcat(char *dest, char *src)
{
    int i;
    int dest_length;
    
    i = 0;
    dest_length = ft_strlen(dest);
    while (src[i] != '\0')
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
    int i;

    length = 0;
    i = 0;
    while (dest[i] != '\0')
    {
        length++;
        i++;
    }
    return (length);
}