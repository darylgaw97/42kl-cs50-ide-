#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;
    int *ptra;
    int *ptrb;
    
    a = 24;
    b = 42;
    ptra = &a;
    ptrb = &b;
    ft_swap(ptra, ptrb);
    printf("a: %i\n", a);
    printf("b: %i\n", b);
    
    return (0);
}

void    ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}