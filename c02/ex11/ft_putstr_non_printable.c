#include <unistd.h>
#include <stdio.h>

void    ft_putstr_non_printable(char *str);
int     is_printable(char c);
void    printhex(unsigned char c);

int main(void)
{
    char *str;

    str = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
}

void ft_putstr_non_printable(char *str)
{
    while (*str != '\0')
    {
        if (!is_printable(*str))
        {
            write(1, "\\", 1);
            printhex(*str);
        }
        else if (is_printable(*str))
            write(1, str, 1);
        str++;
    }
}

int is_printable(char c)
{
    if (c >= 32 && c <= 126)
    {
        return (1);
    }
    return (0);
}

void    printhex(unsigned char c)
{
    unsigned char digit1;
    unsigned char digit2;
    char *hex;

    hex = "0123456789abcdef";
    digit1 = (unsigned char)hex[c / 16];
    digit2 = (unsigned char)hex[c % 16];
    write(1, &digit1, 1);
    write(1, &digit2, 1);
}