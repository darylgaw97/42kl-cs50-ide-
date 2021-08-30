#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char    *dest = malloc(1);
    char    *src = "abc";

    printf("dest (before): %s\n", dest);
    printf("src (before): %s\n", src);

    strcpy(dest, src);
    printf("dest (after): %s\n", dest);

    free(dest);
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