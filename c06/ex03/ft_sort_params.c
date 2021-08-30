#include <unistd.h>

int sorted(int argc, char **argv);
int ft_strcmp(char *s1, char *s2);
void ft_putstr(char *str);

int main(int argc, char **argv)
{
    int i;
    char *temp;
    
    while (!sorted(argc, argv))
    {
        i = 1;
        while (i < argc - 1)
        {
            if (ft_strcmp(argv[i], argv[i + 1]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = temp;
            }
            i++;
        }
    }
    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        i++;
    }
}

int sorted(int argc, char **argv)
{
    int i;
    
    i = 1;
    while (i < argc - 1)
    {
        if (ft_strcmp(argv[i], argv[i + 1]) > 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void ft_putstr(char *str)
{
    int i;
    char c;
    
    i = 0;
    while (str[i])
    {
        c = str[i];
        write(1, &c, 1);
        i++;
    }
    write (1, "\n", 1);
}