# FT_PRINTF

# Sobre o projeto
O projeto tem como objetivo replicar alguns comportamentos da funcao printf, as flags que devem ser replicadas sao: "cspdiuxX".
Sendo %c para char ,%s para string ,%p para pointer hex, %d para digito, %i para inteiro, %u para unsigned int,
%x para decimal em lowercase e %X para decimal Uppercase.


## Como eu fiz
### Introdução
Utilizei algumas bibliotecas para auxiliar na criação desse projeto, como sabemos o printf
basicamente usa a funcao write e conta o numero de caracteres impressos na tela, com isso
usei a biblioteca <unistd.h> para ter acesso a funcao write, usei a <stdarg.h>, pois uma 
das particularidades do printf e aceitar uma quantidade de argumentos indefinidas,
e dentro dessa biblioteca temos algumas macros que nos ajudam a tratar disso,
no caso va_list, va_start, va_arg e var_end. A bilioteca <limits.h> foi
para usar em um pequeno trecho do codigo para nao precisar escrever o valor do
INT_MIN.

### Resumo
o nosso protopito da funcao seria int	ft_printf(const char *format, ...) Aqui indicamos com (...) 
que pode aceitar a quantidade de argumentos que quiser depois inicializamos nossa macro
criamos uma va_list list;

- Quando fazemos um va_start inicilizamos o primeiro argumento
- Quando fazemos var_arg vamos para o proximo argumento
- Dentro do var_arg(lista, tipo que variavel deve ser) , a lista e o tipo que ela deve ter
- Usamos o var_end para informar que termimos de usar aquelas variaveis;

Nossa funcao deve retornar o tamanho de letras imprimidas, tanto do "format" que sera nosso array que 
vamos verificar as flags para manipular a nossa va_list, %s ou qualquer tipo nao devem contar
e sim o resultado da impressao dela.

![PRINTF](https://i.imgur.com/Ncfan8J.png)

Dentro da Print c, faco a verificacao de qual sera a flag que vamos usar, todas as funcoes retornam a quantidade de letras ou numeros impressos
e sempre faco length += pois ele entra como dependencia do escopo da funcao.

![PRINTC](https://i.imgur.com/f3VHNQU.png)

### Prototipos da funcoes

Nosso header recebe 10 funcoes, algumas semelhantes porem com leves diferenças, todas devolvem o valor de caracteres que foi impresso.

![HEADER](https://i.imgur.com/fcue4Wp.png)

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



