#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str);
int ft_is_space(char str);
int ft_return(int num, int negatives);

int main(void)
{
    char *str;
    
    str = "abc---+--+-567   ";
    printf("%i", ft_atoi(str));
}

int ft_atoi(char *str)
{
    int i;
    int negatives;
    int num;
    
    i = 0;
    negatives = 0;
    num = 0;
    while (ft_is_space(str[i]))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            negatives++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + str[i] - '0';
        i++;
    }
    return (ft_return(num, negatives));
}

int ft_is_space(char str)
{
    if ((str >= '\t' && str <= '\r') || str == ' ')
    {
        return (1);
    }
    return (0);
}

int ft_return(int num, int negatives)
{
    if (negatives % 2 == 0)
        return (num);
    else
        return (-num);
}