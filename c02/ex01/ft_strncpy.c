#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char            *dest = malloc(5);
    char            *src = "abcde";
    unsigned int    n;

    n = 6;
    printf("dest (before): %s\n", dest);
    
    ft_strncpy(dest, src, n);
    printf("dest (after): %s\n", dest);
    free(dest);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
