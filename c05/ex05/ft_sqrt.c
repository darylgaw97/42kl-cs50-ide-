#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
    printf("%i\n", ft_sqrt(-1));
    printf("%i\n", ft_sqrt(0));
    printf("%i\n", ft_sqrt(1));
    printf("%i\n", ft_sqrt(2));
    printf("%i\n", ft_sqrt(3));
    printf("%i\n", ft_sqrt(4));
    printf("%i\n", ft_sqrt(64));
    printf("%i\n", ft_sqrt(2147395600));
    printf("%i\n", ft_sqrt(2147483647));
}

int ft_sqrt(int nb)
{
    int i;
    
    i = 0;
    if (nb <= 0)
        return (0);
    while (i < 46341)
    {
        if (i * i != nb)
            i++;
        else if (i * i == nb)
            return (i);
    }
    return (0);
}