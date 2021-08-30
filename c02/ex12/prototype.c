#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_print_memory(void *addr, unsigned int size);
void    make_addr_hex(void *addr);
void    make_string_hex(char *addr, unsigned int size);
void    printhex(int hex);
void    putstr(char *addr, unsigned int size);

int main(void)
{
    char *str;
    unsigned int size;

    str = "\n\tlol.lol\n \0";
    size = 12;
    ft_print_memory(str, size);
}

void    ft_print_memory(void *addr, unsigned int size)
{
    make_addr_hex(addr);
    make_string_hex(addr, size);
    putstr(addr, size);
    return ((void)addr);
}

void    make_addr_hex(void *addr)
{
    long int decimal;
    long int quotient;
    long int array[16];
    int i;

    decimal = (long int)addr;
    quotient = decimal;
    i = 15;
    while (i >= 0)
    {
        array[i] = quotient % 16;
        quotient = quotient / 16;
        i--;
    }
    i = 0;
    while (i < 16)
    {
        printhex(array[i]);
        i++;
    }
    write(1, ": ", 2);
}

void    make_string_hex(char *addr, unsigned int size)
{
    unsigned int quotient;
    unsigned int i;
    char digit1;
    char digit2;

    quotient = size;
    i = 0;
    while (i < size)
    {
        digit1 = addr[i] / 16;
        digit2 = addr[i] % 16;
        printhex(digit1);
        printhex(digit2);
        i++;
        if (i % 2 == 0)
        {
            write(1, " ", 1);
        }
    }
}

void printhex(int hex)
{
    char h;

    h = (char)hex;
    if (h >= 10)
    {
        h = h + 87;
        write(1, &h, 1);
    }
    else if (h <= 9)
    {
        h = h + 48;
        write(1, &h, 1);
    }
}

void    putstr(char *addr, unsigned int size)
{
    unsigned int i;
    char c;
    
    i = 0;
    while (i < size)
    {
        c = (char)addr[i];
        if (c >= 32 && c <= 126)
        {
            write(1, &c, 1);
        }
        else if (c <= 31 || c >= 127)
        {
            write(1, ".", 1);
        }
        i++;
    }
}