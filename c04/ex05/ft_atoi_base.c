#include <unistd.h>
#include <stdio.h>

int ft_atoi_base(char *str, char *base);
int convert(int n, char *base);
int ft_return(int num, int negatives);
int ft_is_space(char str);
int ft_strlen(char *base);

int main(void)
{
    char *str;
    char *base;

    str = " +--+-+CBBCBBCBC1bcde100110";
    base = "CB";
    printf("%i", ft_atoi_base(str, base));
}

int ft_atoi_base(char *str, char *base)
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
    return (convert(ft_return(num, negatives), base));
}

int convert(int n, char *base)
{
    int baselength;
    int decimal;
    int weight;
    int rem;

    baselength = ft_strlen(base);
    decimal = 0;
    weight = 1;

    while (n != 0)
    {
        rem = n % 10;
        decimal = decimal + rem * weight;
        n = n / 10;
        weight = weight * baselength;
    }
    return (decimal);
}

int ft_return(int num, int negatives)
{
    if (negatives % 2 == 0)
        return (num);
    else
        return (-num);
}

int ft_is_space(char str)
{
    if ((str >= '\t' && str <= '\r') || str == ' ')
        return (1);
    return (0);
}

int ft_strlen(char *base)
{
    int length;

    length = 0;
    while (base[length] != '\0')
        length++;
    return (length);
}
