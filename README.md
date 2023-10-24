##Ft_Printf

O ft_printf ele e um projeto voltados a algumas flags do printf normal,
as flags sao "cspdiuxX".
Sendo c para char
S para String
P para pointer hex
D para digito
I para inteiro
U para unsigned int
x para decimal
X para decimal Upercase


Usamos a biblioteca <stdarg.h>
com isso podemos usar o as var list

nosso protopito da funcao seria 

int	ft_printf(const char *format, ...) Aqui indicamos com (...) que pode aceitar a quantidade de argumentos que quiser

depois inicializamos nossa macro

criamos uma va_list list;

quando fazemos um va_start inicilizamos o primeiro argumento

quando fazemos var_arg vamos para o proximo argumento

dentro do var_arg(lista, tipo que variavel deve ser) , a lista e o tipo que ela deve ter

Usamos o var_end para informar que termimos de usar aquelas variaveis;

Nossa funcao deve retornar o tamanho de letras imprimidas, tanto do "format" que sera nosso array q vamos verificar as flags para manipular a nossa va_list, %s ou qualquer tipo nao devem contar
e sim o resultado da impressao dela

Dentro da Print c, faco a verificacao de qual sera a flag que vamos usar, todas as funcoes retornam a quantidade de letras ou numeros impressos

e sempre faco length += pois ele entra como dependencia do escopo da funcao.


