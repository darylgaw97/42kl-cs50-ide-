#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int    ft_strlen(char *dest);

int main(void)
{
    char dest[100] = "abcde";
    char *src = "";
    int size = 5;

    printf("return value (ft)   : %i\n", ft_strlcat(dest, src, size));
    printf("return value (ori)  : %lu\n", strlcat(dest, src, size));
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int dest_length;
    unsigned int src_length;

    i = 0;
    dest_length = ft_strlen(dest);
    src_length = ft_strlen(src);
    if (size == 0)
        return (0);
    while (src[i] != '\0')
    {
        if (i == size)
        {
            dest[dest_length + i - 1] = '\0';
            return  ;
        }
        dest[dest_length + i] = src[i];
        i++;
    }
    
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

