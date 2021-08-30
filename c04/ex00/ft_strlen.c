#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *str;
    
    str = "12345";
    printf("%i", ft_strlen(str));
}

int ft_strlen(char *str)
{
    int i;
    int str_length;
    
    i = 0;
    str_length = 0;
    while (str[i] != '\0')
    {
        str_length++;
        i++;
    }
    return (str_length);
}
