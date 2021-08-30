#include <unistd.h>
#include <stdio.h>

void    ft_div_mod(int a, int b, int *_div, int *mod);

int main(void)
{
    int a;
    int b;
    int divided;
    int modulated;

    a = 10;
    b = 5;
    ft_div_mod(a, b, &divided, &modulated);
    printf("div: %i\n", divided);
    printf("mod: %i\n", modulated);
    return (0);
}

void    ft_div_mod(int a, int b, int *_div, int *mod)
{
    *_div = a / b;
    *mod = a % b;
    return;
}