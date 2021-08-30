#include <unistd.h>
#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a;
    int b;

    a = 10;
    b = 5;
    ft_ultimate_div_mod(&a, &b);
    printf("a, divided: %i\n", a);
    printf("b, modulated: %i\n", b);
    return (0);
}

void    ft_ultimate_div_mod(int *a, int *b)
{
    int divided;
    int modulated;

    divided = *a / *b;
    modulated = *a % *b;
    *a = divided;
    *b = modulated;
    return ;
}
