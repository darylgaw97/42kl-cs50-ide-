#include <unistd.h>

void    ft_putstr(char *str);

int main(void)
{
    char *str;
    
    str = "42KL";
    ft_putstr(str);
    return (0);
}

void    ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    return ;
}