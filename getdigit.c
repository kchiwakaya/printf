#include <unistd.h>
#include "main.h"

int getdigit(int number)
{
    int n;
    int count = 0;


    if (number == 0)
        return(0);
    n = number/10;
    getdigit(n);
    _putchar(number%10 + '0');
    count += 1;
    return (count);

}

