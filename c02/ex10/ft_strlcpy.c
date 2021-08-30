#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
int    ft_strlen(char *str);

int main(void)
{
    char            *src = "abcde";
    unsigned int    size = 7;
    char            dest[size];
    unsigned int    ret;

    ret = ft_strlcpy(dest, src, size);
    printf("%s\n", dest);
    printf("%i\n", ret);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    if (size > 0)   //checking if size is at least 1 byte
    {
        while (src[i] != '\0')  //looping until reaching end of src
        {
            if (i == size - 1)  //stop looping if reaches size
                break ;
            dest[i] = src[i];   //copying src to dest
            i++;    //increment
        }
        dest[i] = '\0';     //last byte is null cap, truncating evrything else behind
    }
    return (ft_strlen(src));
}

int    ft_strlen(char *src)
{
    int length;

    length = 0;
    while (src[length]')
        length++;
    return (length);
}