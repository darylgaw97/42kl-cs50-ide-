#include <unistd.h>

void printargv(char *str);

int main(int argc, char **argv)
{
    int i;
    
    i = 1;
    while (i < argc)
    {
        printargv(argv[i]);
        i++;
    }
}

void printargv(char *str)
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
    write(1, "\n", 1);
}