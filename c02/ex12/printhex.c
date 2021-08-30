#include <unistd.h>
#include <stdio.h>

void    printhex(void *addr);

int main(void)
{
    char *addr;
    printhex(&addr);
}

void    printhex(void *addr)
{
    /*Step 1: Divide the original decimal number by 16
    Step 2: Divide the quotient by 16
    Step 3: Repeat the step 2 until we get quotient equal to zero.*/
    
    long int hex;
    
    hex = (long int)addr;
    printf("%li", hex);
}
