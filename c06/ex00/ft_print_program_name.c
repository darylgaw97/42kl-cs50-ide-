#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    char c;

    i = 0;
    if (argc < 1)
        return (1);
    while (argv[0][i] != '\0')
    {
        c = argv[0][i];
        write(1, &c, 1);
        i++;
    }
}