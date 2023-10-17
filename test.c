
#include "./includes/ft_printf.h"

#include <stdio.h>

int main()
{
    printf("tamanho do meu  :%i\n",ft_printf("%s aaaaaaaaaaaaaa %s", "diego", "souza"));
    printf("tamanho do original  %i:",printf("%s aaaaaaaaaaaaaa %s", "diego", "souza"));
  
}