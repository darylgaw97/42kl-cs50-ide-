#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
    printf("%i", ft_iterative_factorial(3));
}

int ft_iterative_factorial(int nb)
{
    int res;
    
    res = 1;
    if (nb >= 0)
    {
        while (nb != 0)
        {
            res = res * nb;
                nb--;
        }
        return (res);
    }
    return (0);
}
