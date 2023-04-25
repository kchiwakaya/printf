#include <unistd.h>
#include "main.h"
/**
*getdigit: returns a digit print
*@number: input digit
*Returns: integer count
*/

int getdigit(int number)
{
    int holder;
    int count = 0;

    if (number == 0)
        return(0);
    holder = number/10;
    getdigit(holder);
    _putchar(number%10 + '0');
    count += 1;
    return (count);
}
