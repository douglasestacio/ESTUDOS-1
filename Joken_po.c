#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
int jogador = 0, computador = 0;

printf ("### Jogo de Joken Po! ###\n");
printf ("   Escolha uma Opção:\n");
printf ("1. PEDRA\n2. PAPEL\n3. TESOURA\n");
printf ("Escolha: ");

scanf ("%d", &jogador);
srand (time(0));

computador = rand () % 3 + 1;

switch (jogador)
{
case 1:
    printf ("JOGADOR: PEDRA\n");
    break;

case 2:
    printf ("JOGADOR: PAPEL\n");
    break;

case 3:
    printf ("JOGADOR: TESOURA\n");
    break;

default:
    printf ("Opcão Invalida\n");
    break;
}

switch (computador)
{
case 1:
    printf ("COMPUTADOR: PEDRA\n");
    break;

case 2:
    printf ("COMPUTADOR: PAPEL\n");
    break;

case 3:
    printf ("COMPUTADOR: TESOURA\n");
    break;

}

if (jogador == computador) {
    printf ("### DEU EMPATE ###\n");

} else if ((computador == 1) && (jogador == 2) || 
    (computador == 2) && (jogador == 3) ||
    (computador == 3) && (jogador == 1)) {
    printf ("### PARABENS! VOCÊ GANHOU ###\n");
} else {
    printf ("### VOCÊ PERDEU! ###\n");
}

return 0;
}