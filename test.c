
#include "./includes/ft_printf.h"

#include <stdio.h>

int main() {
    int var = 5;
    int *ptr = &var;


    //ft_printf("%x",140729585118572);

    printf("%p%p printf \n", NULL, NULL);
     ft_printf("%p%p ft_printf \n", NULL, NULL);
    
//    printf("FT O endereço de var é: %p\n", &var);
//     printf("FT O valor de ptr é: %p\n", ptr);
    return 0;
}
