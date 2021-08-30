#include <unistd.h>
#include <stdlib.h>

void    ft_print_combn(int n);
void    make_array(int *a, int n);
void    printnum(int *a, int n);
void    changenum(int *a, int x, int n, int maxlast);

int main(int argc,  char **argv)
{
    int n;
    
    n = atoi(argv[1]);
    ft_print_combn(n);
}

void    ft_print_combn(int n)
{
    int a[9];
    int maxlast;
    int x;              //x is my cursor

    make_array(a, n);   //create an array which consist of the first number combination (eg: if user input 3, make array will create "012")
    maxlast = 9;        //capping the last digit at '9'
    x = n - 1;
    while (a[0] <= 10 - n)      //loop stops when first digit becomes invalid
    {
        if (a[0] == 10 - n)     //last loop, this if statement causes no comma to be printed after last number combn
        {
            printnum(a, n);
            return ;
        }
        else if (a[x] <= maxlast)   //normal loop, prints number combn and ", "
        {
            printnum(a, n);
            write(1, ", ", 2);
            a[x]++;
        }
        else    //changenum will be triggered when above if statements are not met, meaning its time to create a new array(019 -> 023)
        {
            changenum(a, n, x, maxlast);
        }
    }
}

void    make_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        a[i] = i;
        i++;
    }
}

void    printnum(int *a, int n)
{
    int     i;
    char    c;

    i = 0;
    while (i < n)
    {
        c = '0' + a[i];
        write (1, &c, 1);
        i++;
    }
}

void    changenum(int *a, int n, int x, int maxlast)
{
    while (a[x] > maxlast)      //checking to see if current digit (starting from right-most digit) is bigger than its possible max
    {
        x--;                    //if it is, move one digit left
        maxlast--;              //maxlast for each digit is diff (minus one each time we move to the left)
    }
    a[x]++;                     //once we reach a digit that is not at maxlast, then we increment that digit
    while (x < n - 1)           //resetting array to next combination
    {
        a[x + 1] = a[x] + 1;    
        if (x < n - 1)
            x++;
    }
}