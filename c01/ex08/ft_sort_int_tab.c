#include <stdio.h>
#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size);
int     sorted(int *tab, int size);
void    ft_swap(int *a, int *b);

int     main(void)
{
    int size;
    size = 9;
    
    int tab[9] = {7,8,9,-9,5,0,5,3,6};
    ft_sort_int_tab(tab, size);
    
    int i;
    i = 0;
    while (i < size)
    {
        printf("%i\n", tab[i]);
        i++;
    }
    return (0);
}

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int a;
    int b;
    int temp;
    
    while (!sorted(tab, size))
    {
        i = 0;
        a = 0;
        while (i < size - 1)
        {
            b = a + 1;
            if (tab[a] > tab[b])
            {
                ft_swap(&tab[a], &tab[b]);
            }
            i++;
            a++;
        }
    }
}

void    ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int     sorted(int *tab, int size)
{
    int i;
    int a;
    int b;
    
    i = 0;
    a = 0;
    while (i < size - 1)
    {
        b = a + 1;
        if (tab[a] > tab [b])
        {
            return (0);
        }
        a++;
        i++;
    }
    return (1);
}