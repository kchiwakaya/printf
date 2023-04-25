#include <unistd.h>
#include "main.h"
/**
 * _tobinary - writes the binary to stdout
 * @num: The number to change
 * Return: binary number
 * 
 */

int tobinary(int num)
{
    if (num == 0)
    {
       _putchar('0');
       return (0);
    }
    else
    {
        int bin = num % 2 + 10 * tobinary(num/2);
        _putchar(bin + '0');
        return (bin);
    }

}

