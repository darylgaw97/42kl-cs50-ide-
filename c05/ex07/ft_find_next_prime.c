#include <unistd.h>
#include <stdio.h>

int ft_find_next_prime(int nb);
int ft_is_prime(int nb);

int main(void)
{
    printf("%i", ft_find_next_prime(37));
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return (2);
    while (!ft_is_prime(nb))
        nb++;
    return nb;
}

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}