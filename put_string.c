#include <unistd.h>
#include "main.h"
/**
*put_string - returns the number of chars
*@strinf: the string
*Return: number of characters in string
int put_string(char *strinf)
{
    int index = 0,count = 0;
    if(strinf)
    {
        while(strinf[index] != '\0')
        {
            _putchar(strinf[index]);
            count += 1;
            index++;
        }
    }
    return(count);
}
