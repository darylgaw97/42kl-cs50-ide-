#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int n;
    int *ptrnbr = &n;
    
    ft_ft(ptrnbr);
    printf("%i", n);
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}