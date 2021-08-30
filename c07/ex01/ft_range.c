#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
    int min;
    int max;
    int *range;
    int i;

    min = 3;
    max = 6;
    range = ft_range(min, max);
    i = 0;
    while (i < max - min)
    {
        printf("%i\n", range[i]);
        i++;
    }
}

int *ft_range(int min, int max)
{
    int *range;
    int i;

    if (min > max)
        return NULL;
    range = malloc(sizeof (int) * (max - min));
    if (range == NULL)
        return NULL;
    i = 0;
    while (i < max - min)
    {
        range[i] = min + i;
        i++;
    }
    return range;
}