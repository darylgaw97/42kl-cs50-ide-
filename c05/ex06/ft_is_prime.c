#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
    printf("%i\n", ft_is_prime(-1));
    printf("%i\n", ft_is_prime(0));
    printf("%i\n", ft_is_prime(1));
    printf("%i\n", ft_is_prime(2));
    printf("%i\n", ft_is_prime(3));
    printf("%i\n", ft_is_prime(8));
    printf("%i\n", ft_is_prime(2147483647));
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