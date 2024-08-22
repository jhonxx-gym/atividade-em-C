1) Qual biblioteca � necess�rio incluir com diretiva #include para utilizar as fun��es 
de entrada padr�o da linguagem C?

R: A biblioteca que deve ser inclu�da � a <stdio.h> (standard input output), que permite
utilizar fun��es tanto de entrada (input) quanto output(sa�da).


2) O trecho do c�digo realiza a leitura de um n�mero inteiro. Entretanto, ele cont�m dois 
erros. Corrija-os e justifique sua resposta.
int n;
scanf("%f", n);

R: H� erro no formato utilizado para leitura do scanf, deve se utilizar %d que l� um 
inteiro, ao inv�s do %f que l� um float. O segundo erro � a falta do operador & antes 
da vari�vel n no scanf.

C�digo corrigido:
int n; //� declarado a vari�vel n do tipo inteiro 
scanf(�%d�, &n); //O scanf � usado para ler um n�mero inteiro e em seguida armazenar na vari�vel n


3) Explique o trecho de c�digo abaixo (linha 2).

char c; // Declara uma vari�vel c do tipo char
scanf(�%c�, &c); // L� um caractere e armazena na var. c
while(getchar() !n= �\n�); /*� um loop while que vai usar a fun��o getchar ate que seja lido um 
caractere �\n� no buffer de entrada para encerrar o loop.*/


4) Explique o trecho do c�digo abaixo:

float largura, comprimento; //Declara duas vari�veis do tipo float
scanf(�%f%f�, &largura, &comprimento); /* Vai ser lido dos n�meros reais e armazenados respectivamente
nas vari�veis largura e comprimento*/



5) Explique o trecho de c�digo abaixo:

char nome[80]; //� declarado um array de caracteres de 80 posi��es que pode armazenar at� 79 caracteres
scanf(�%s�, nome); //Vai ser lido uma string e armazenado no array



6) Explique o trecho de c�digo abaixo:

printf(�Ola, mundo!�); /*O comando de sa�da printf ir� exibir na tela a string �Ol�, mundo!�*/


7) Explique o trecho de c�digo abaixo.

printf(�Ola mundo! \n�); /*O comando de sa�da printf ir� exibir na tela a string �Ol�, mundo!� e 
ir� fazer uma quebra de linha, indo para a linha de baixo.*/



8) Explique o trecho de c�digo abaixo

printf(�1+1\n�); /*O comando de sa�da printf ir� exibir na tela �1+1� e ir� para uma nova linha. 
Obs: os n�meros n�o ser�o somados pois s�o uma string e n�o uma express�o aritm�tica.*/