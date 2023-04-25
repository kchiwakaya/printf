#include <unistd.h>
#include "main.h"
/**
*getdigit: returns a digit print
*@number: input digit
*Returns: integer count
*/

void getdigit(int number)
{
      	if (number < 0)
    	{
        	_putchar('-');
        	number = -number;
    	}
    	if (number == 0)
        	_putchar('0');
    	if (number/10)
        	getdigit(number/10);

   	 putchar(number%10 + '0');
}
