#include <unistd.h>
#include "main.h"
/**
* _printf - replicates standard output's printf
*@format: format of the characters
*@...: variable arguments
*Return: number of characters printed
*/

int _printf(const char *format, ...)
{
    unsigned un = 0,count = 0;
    va_list arguments;
    va_start(arguments,format);
    while (format[un] != '\0')
    {
        if (format[un] != '%')
        {
            _putchar(format[un]);
        }
        else if (format[un +1] == 'c')
        {
            _putchar(va_arg(arguments,int));

            un++;
        }
        else if (format[un+1] == 's')
        {
            int string_count = put_string(va_arg(arguments,char*));
            un++;
            count += (string_count - 1);
        }
        else if (format[un+1] == '%')
            _putchar('%');
        else if ((format[un+1] == 'd')||(format[un+1] == 'i'))
        {
            count += getdigit(va_arg(arguments,int));
            un++;
        }
        count ++;
        un++;
    }
    return (count);
}

