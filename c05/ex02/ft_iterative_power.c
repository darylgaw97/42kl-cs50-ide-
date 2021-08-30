#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
    int nb;
    int power;
    
    nb = 2;
    power = 3;
    printf("\nresult: %i\n", ft_iterative_power(nb, power));
}

int ft_iterative_power(int nb, int power)
{
    int res;
    
    res = 1;
    if (power < 0)
        return (0);
    if (nb == 0 && power == 0)
        return (1);
    while (power > 0)
    {
        res = res * nb;
        power--;
    }
    return (res);
}

