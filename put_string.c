#include <unistd.h>
#include "main.h"

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
