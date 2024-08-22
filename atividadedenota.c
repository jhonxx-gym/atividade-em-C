1) Qual biblioteca é necessário incluir com diretiva #include para utilizar as funções 
de entrada padrão da linguagem C?

R: A biblioteca que deve ser incluída é a <stdio.h> (standard input output), que permite
utilizar funções tanto de entrada (input) quanto output(saída).


2) O trecho do código realiza a leitura de um número inteiro. Entretanto, ele contém dois 
erros. Corrija-os e justifique sua resposta.
int n;
scanf("%f", n);

R: Há erro no formato utilizado para leitura do scanf, deve se utilizar %d que lê um 
inteiro, ao invés do %f que lê um float. O segundo erro é a falta do operador & antes 
da variável n no scanf.

Código corrigido:
int n; //É declarado a variável n do tipo inteiro 
scanf(“%d”, &n); //O scanf é usado para ler um número inteiro e em seguida armazenar na variável n


3) Explique o trecho de código abaixo (linha 2).

char c; // Declara uma variável c do tipo char
scanf(“%c”, &c); // Lê um caractere e armazena na var. c
while(getchar() !n= ‘\n’); /*É um loop while que vai usar a função getchar ate que seja lido um 
caractere “\n” no buffer de entrada para encerrar o loop.*/


4) Explique o trecho do código abaixo:

float largura, comprimento; //Declara duas variáveis do tipo float
scanf(“%f%f”, &largura, &comprimento); /* Vai ser lido dos números reais e armazenados respectivamente
nas variáveis largura e comprimento*/



5) Explique o trecho de código abaixo:

char nome[80]; //É declarado um array de caracteres de 80 posições que pode armazenar até 79 caracteres
scanf(“%s”, nome); //Vai ser lido uma string e armazenado no array



6) Explique o trecho de código abaixo:

printf(“Ola, mundo!”); /*O comando de saída printf irá exibir na tela a string “Olá, mundo!”*/


7) Explique o trecho de código abaixo.

printf(“Ola mundo! \n”); /*O comando de saída printf irá exibir na tela a string “Olá, mundo!” e 
irá fazer uma quebra de linha, indo para a linha de baixo.*/



8) Explique o trecho de código abaixo

printf(“1+1\n”); /*O comando de saída printf irá exibir na tela “1+1” e irá para uma nova linha. 
Obs: os números não serão somados pois são uma string e não uma expressão aritmética.*/