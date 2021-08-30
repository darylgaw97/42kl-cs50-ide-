#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
    char *str;
    
    str = "abcde12345";
    ft_putstr(str);
}

void ft_putstr(char *str)
{
    int i;
    char c;
    
    i = 0;
    while (str[i] != '\0')
    {
        c = str[i];
        write(1, &c, 1);
        i++;
    }
}