#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){

int jogador = 0, computador = 0, resultado = 0, menu = 0;
srand (time(0));
computador = rand () % 2 + 1;

printf ("### Jogo de Impar ou Par! ###\n");
printf ("1. Jogar\n");
printf ("2. Ver Regras do Jogo\n");
printf ("3. Sair do Jogo\n");
printf ("Escolha Uma Opção: ");
scanf ("%d", &menu);

switch (menu)
{
case 1:
    printf ("### Então Bora Jogar ###\n");
    printf ("Escolha um numero de 1 a 2: ");
    scanf ("%d", &jogador);

if (jogador < 1 || jogador > 2) {
    printf ("Entrada Invalida\n");
    return 1;
    
}

case 2:
    printf ("Vence quem Fizer o Impar ou Par\n");
    return 0;   

case 3:
    printf ("Saindo.......\n");
    return 0;

default:
    printf ("Opção Invalida!");
    return 0;
}


printf ("Escolha do Computador: %d\n", computador);

if ((computador == 1 && jogador == 1) || (computador == 2 && jogador == 2)){
    printf ("Quem Escolheu IMPAR Ganhou. PARABENS!\n");
} else {
    printf ("Quem Escolheu PAR Ganhou. PARABENS!\n");
}


return 0;
}
