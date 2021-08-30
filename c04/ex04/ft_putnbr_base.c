#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);
int ft_strlen(char *base);
int is_valid_arg(char *base, int baselength);
void ft_putchar(int nbr, char *base);

int main(void)
{
    int nbr;
    char *base;

    nbr = 6969; //DECIMAL
    base = "012345679ABCDE";
    ft_putnbr_base(nbr, base);
}

void ft_putnbr_base(int nbr, char *base)
{
    unsigned int baselength;
    unsigned int unsnbr;
    
    baselength = ft_strlen(base);
    if (!is_valid_arg(base, baselength))
        return ;
    if (nbr < 0)
    {
        unsnbr = nbr * -1;
        write(1, "-", 1);
    }
    else
        unsnbr = nbr;
    if (unsnbr < baselength)
    {
        ft_putchar(unsnbr, base);
    }
    if (unsnbr >= baselength)
    {
        ft_putnbr_base((unsnbr / baselength), base);
        ft_putnbr_base((unsnbr % baselength), base);
    }
}

int ft_strlen(char *base)
{
    int length;

    length = 0;
    while (base[length] != '\0')
    {
        length++;
    }
    return (length);
}

int is_valid_arg(char *base, int baselength)
{
    int i;
    int j;

    i = 0;
    if (baselength < 2)
        return (0);
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
            return (0);
        j = i + 1;
        while (j < baselength)
        {
            if (base[j] == base[i])
                return(0);
            j++;
        }
        i++;
    }
    return (1);
}

void ft_putchar(int nbr, char *base)
{
    char c;

    c = base[nbr];
    write(1, &c, 1);
}
