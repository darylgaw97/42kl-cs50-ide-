#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char *s1;
    char *s2;
    unsigned int n;

    s1 = "abcde";
    s2 = "abcde";
    n = 5;
    printf("%i\n", ft_strncmp(s1, s2, n));
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
        {
            break ;
        }
        i++;
    }
    if (i < n)
    {
        return ((unsigned int)s1[i] - (unsigned int)s2[i]);
    }
    return (0);
}