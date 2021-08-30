#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str);
char *ft_strlowcase(char *str);
int isalphanumeric(char c);

int main(void)
{
    char *str
    
    str = "sALUT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", str);
    ft_strcapitalize(str);
    printf("%s\n", str);
}

char    *ft_strcapitalize(char *str)
{
    int tocaps;
    int i;

    tocaps = 1;
    i = 0;
    ft_strlowcase(str);
    while (str[i] != '\0')
    {
        if (tocaps == 1)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
            tocaps = 0;
        }
        if (!isalphanumeric(str[i]))
            tocaps = 1;
        i++;
    }
    return (str);
}

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

int isalphanumeric(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
}