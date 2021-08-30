#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
    printf("%i\n", ft_recursive_factorial(3));
}

int ft_recursive_factorial(int 2)
{
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}