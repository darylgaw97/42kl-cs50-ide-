#include <unistd.h>
#include <stdio.h>

void    str_to_hex(void *addr)
{
    int i;
    
    i = 0;
    while (*addr != '\0')
    {
        while (i < 4)
        {
            printhex(*addr)
            i++;
            addr++;
        }
        write(1, " ", 1);
    }
}