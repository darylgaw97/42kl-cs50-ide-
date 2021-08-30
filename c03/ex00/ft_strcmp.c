#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char *s1;
    char *s2;

    s1 = "";
    s2 = "a";
    printf("%i\n", ft_strcmp(s1, s2));
    printf("%i\n", strcmp(s1, s2));
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}