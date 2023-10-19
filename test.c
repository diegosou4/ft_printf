
#include "./includes/ft_printf.h"

#include <stdio.h>

int main() {
    int var = 5;
    int *ptr = &var;


    //ft_printf("%x",140729585118572);

     //t_printf("FT O endereço de var é: %p\n", &var);
     printf("%i ft\n",ft_printf("O valor de ptr é: %p\n", ptr));
    
    //printf("O endereço de var é: %p\n", &var);
    printf("%i  printf \n",printf("O valor de ptr é: %p\n", ptr));

}
