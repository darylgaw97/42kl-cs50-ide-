#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int *range = NULL;
    int min;
    int max;
    int i;
    
    min = -1;
    max = 6;
    
    ft_ultimate_range(&range, min, max);
    
    i = 0;
    while (i < max - min)
    {
        printf("%i\n", range[i]);
        i++;
    }
    free(range);
}

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    
    i = 0;
    range[0] = malloc(sizeof(int) * max - min + 1);
    if (range == NULL)
        return (0);
    while (i < max - min)
    {
        range[0][i] = min + i;
        i++;
    }
    return (max - min);
}