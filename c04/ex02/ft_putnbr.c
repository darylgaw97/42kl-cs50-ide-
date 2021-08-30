#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb);
void ft_putchar(int nb);

int main(void)
{
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(-21);
    write(1, "\n", 1);
    ft_putnbr(0);
    write(1, "\n", 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        nb = nb * -1;
        write(1, "-", 1);
    }
    if (nb >= 0 && nb <= 9)
    {
        ft_putchar(nb);
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

void ft_putchar(int nb)
{
    char c;

    c = '0' + nb;
    write(1, &c, 1);
}
