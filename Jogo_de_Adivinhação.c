#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){

int numerojogador = 0, numerocomputador = 0, resultado = 0;
char tipocomparacao = 0;
srand (time(0));
numerocomputador = rand () % 100 + 1;

printf ("Bem Vindo ao Jogo, Maior, Menor ou Igual\n");
printf ("Você deve escolher um numero e o tipo de comparação\n");
printf ("M. Maior\n");
printf ("N. Menor\n");
printf ("I. Igual\n");

printf ("Escolha a Comparação: \n");
scanf ("%c", &tipocomparacao);

printf ("Digite seu número (entre 1 e 100): \n");
scanf ("%d", &numerojogador);

switch (tipocomparacao)
{
case 'M':
case 'm':
resultado = numerojogador > numerocomputador ? 1 : 0;
printf ("Você Escolheu a Opção Maior!\n");
    break;

case 'N':
case 'n':
resultado = numerojogador < numerocomputador ? 1 : 0;
printf ("Você Escolheu a Opção Menor!\n");
    break;

case 'I':
case 'i':
resultado = numerojogador == numerocomputador ? 1 : 0;
printf ("Você Escolheu a Opção Igual!\n");
    break;

default:
printf ("Opção Inválida!\n");
    break;
}

printf ("O número do computador é: %d\n", numerocomputador);

if (resultado == 1)  {
    printf ("VOCÊ VENCEU!\n");
} else {
    printf ("VOCÊ PERDEU\n");
}


    return 0;
}