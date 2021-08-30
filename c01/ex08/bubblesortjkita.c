#include <stdio.h>
#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size);

int     main(void)
{
    int size;
    size = 9;
    
    int tab[9] = {1,2,3,5,3,4,7,5,5};
    ft_sort_int_tab(tab, size);
    
    int i;
    i = 0;
    while (i < size)
    {
        printf("%i\n", tab[i]);
        i++;
    }
}

void    ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i;
    int n;

    i = 0;
    n = 0;
    while (n < size)
    {
        i = n + 1;
        while (i < size)
        {
            if (tab[n] > tab[i])
            {
                temp = tab[n];
                tab[n] = tab[i];
                tab[i] = temp;
            }
            i++;
        }
        n++;
    }
}