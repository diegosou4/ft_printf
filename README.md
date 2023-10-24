# FT_PRINTF

# Sobre o projeto
O projeto tem como objetivo replicar alguns comportamentos da função printf. As flags que devem ser replicadas são: "cspdiuxX".
Isso significa que o formato %c é usado para caracteres, %s para strings, %p para ponteiros em hexadecimal, %d para números decimais
, %i para inteiros, %u para inteiros não assinados, %x para números decimais em minúsculas e %X 
para números decimais em maiúsculas.


## Como eu fiz
### Introdução
Para criar esse projeto, utilizei algumas bibliotecas para auxiliar na sua implementação.
Como sabemos, o printf basicamente usa a função write para imprimir os caracteres na tela.
Para isso, utilizei a biblioteca <unistd.h> para ter acesso à função write. Além disso, utilizei 
a biblioteca <stdarg.h>, pois uma das particularidades do printf é aceitar uma quantidade 
indefinida de argumentos. Dentro dessa biblioteca, temos algumas macros que nos ajudam a lidar com isso
, como va_list, va_start, va_arg e va_end. A biblioteca <limits.h> foi usada em
um trecho do código para evitar escrever o valor de INT_MIN.

### Resumo
O protótipo da função que desenvolvemos é int ft_printf(const char *format, ...). Aqui, o ... indica que a função pode aceitar uma quantidade variável de argumentos. Inicializamos uma macro criando uma va_list list:

    Quando usamos va_start, inicializamos o primeiro argumento.
    Quando usamos va_arg, avançamos para o próximo argumento.
    Dentro do va_arg(list, tipo), a lista é a lista de argumentos e o tipo é o tipo que a variável deve ter.
    Usamos va_end para informar que terminamos de usar essas variáveis.

Nossa função deve retornar o número de caracteres impressos, tanto do "format" (que é o array que usamos para verificar as flags e manipular a va_list) quanto o resultado da impressão em si.

![PRINTF](https://i.imgur.com/Ncfan8J.png)

Dentro da Print c, faco a verificacao de qual sera a flag que vamos usar, todas as funcoes retornam a quantidade de letras ou numeros impressos
e sempre faco length += pois ele entra como dependencia do escopo da funcao.

![PRINTC](https://i.imgur.com/f3VHNQU.png)

### Prototipos da funcoes

Nosso cabeçalho recebe 10 funções, algumas semelhantes, mas com pequenas diferenças. Todas elas retornam a quantidade de caracteres que foram impressos
e tambem imprime.

![HEADER](https://i.imgur.com/fcue4Wp.png)

## Resultado
![Resultado](https://i.imgur.com/vyHE9Lm.png)

# Como executar o projeto


```bash
# clonar repositório
git clone https://github.com/diegosou4/ft_printf/ ft_printf

# entrar na pasta do projeto 
cd ft_printf

# Execute o comando para gerar 
make

# Para usar a funcao ft_printf coloque o include "./includes/ft_printf.h" no cabecario da sua main
# E na hora de copilar
gcc main.c libftprintf.a

# Comando para apagar a funcao
make fclean
```


# Autor

Diego Moreira Sardinha de Souza

diegmore - User da 42
- C



