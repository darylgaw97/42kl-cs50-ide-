#include <unistd.h>
#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int size;
    size = 5;

    int tab[5] = {1, 2, 3, 4, 5};
    ft_rev_int_tab(tab, size);

    int i;
    i = 0;
    while (i < size)
    {
        printf("%i\n", tab[i]);
        i++;
    }
}

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int front;
    int back;
    int temp;

    front = 0;
    back = size - 1;
    i = 0;
    while (i < size / 2)
    {
        temp = tab[front];
        tab[front] = tab[back];
        tab[back] = temp;
        i++;
        front++;
        back--;
    }
}
