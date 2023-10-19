
#include "../includes/ft_printf.h"

int ft_printp(unsigned long long int nmbp)
{
    int length;
    length = 0;
    if(nmbp)
    {
        length += ft_putstr("0x");
        return(length += ft_hexdec(nmbp,"0123456789abcdef"));
    }
    return(length);

}