#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    *ft_print_memory(void *addr, unsigned int size);
void    converthex(void *addr);
void    printhex(char *output);

int main(void)
{
    char            *str;
    unsigned int    size;

    str = "Bonjour les amin";
    size = strlen(str);

    ft_print_memory(&str, size);
}

void    *ft_print_memory(void *addr, unsigned int size)
{
    converthex(addr);
    return (addr);
}

void    converthex(void *addr)
{
    long int    hex;
    long int    remain;
    long int    quotient;
    char        output[16];
    int         i;

    hex         = (long int)addr;
    quotient    = hex;
    i           = 15;
    while (quotient != 0)
    {
        remain      = quotient % 16;
        quotient    = quotient / 16;
        output[i]   = remain;
        i--;
    }
    while (i >= 0)
    {
        output[i] = 0;
        i--;
    }
    printhex(output);
}

void printhex(char *output)
{
    char    c;
    int     i;

    i = 0;
    while (i < 16)
    {
        if (*output >= 10)
        {
            c = *output + 55;
            write(1, &c, 1);
        }
        else if (*output <= 9)
        {
            c = *output + 48;
            write(1, &c, 1);
        }
        i++;
        output++;
    }
    write(1, ": ", 2);
}