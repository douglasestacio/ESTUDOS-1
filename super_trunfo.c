#include <stdio.h>
#include <string.h>

int main (){

int c; // LIMPA O BUFFER  --->  while ((c = getchar()) != '\n' && c != EOF);

// VARIANTES DAS CARTAS 1 E 2:
char carta1[20], carta2 [20];
char estado1[20], estado2 [20];
char cidade1[20], cidade2 [20];
float area1 = 0, area2 = 0;
float pib1 = 0, pib2 = 0;
float populacao1 = 0, populacao2 = 0;
int pontosturisticos1 = 0, pontosturisticos2 = 0;
float resultado1 = 0, resultado2 = 0;
int menu = 0, continuar = 1;

printf ("1. Entrar no Jogo\n");
printf ("2. Ver Regras do Jogo\n");
printf ("3. Sair\n");
printf ("Escolha uma opção: ");
scanf ("%d", &menu);
while ((c = getchar()) != '\n' && c != EOF); // limpa buffer

while (continuar)
{

switch (menu)
{
case 1:
    printf ("\n--- SUPER TRUNFO ---\n");
    break;

case 2:
    printf ("Quem tiver o maior numero em M² por pessoa Ganha!\n");
    return 0;

case 3:
    printf ("Saindo.....\n");
    return 0;

default:
    printf ("Opção invalida\n");
    continue;
}

// IMPRESSAO E LEITURA DA PRIMEIRA CARTA:
printf ("NOME DA PRIMEIRA CARTA: ");
fgets (carta1, 20, stdin); // LÊ COM ESPAÇOS
carta1 [strcspn(carta1, "\n")] = '\0'; // REMOVE O '\N' DO FINAL
printf ("ESTADO: ");
fgets (estado1, 20, stdin);
estado1 [strcspn(estado1, "\n")] = '\0'; // REMOVE O '\N' DO FINAL
printf ("CIDADE: ");
fgets (cidade1, 20, stdin);
cidade1 [strcspn(cidade1, "\n")] = '\0'; // REMOVE O '\N' DO FINAL
printf ("POPULAÇAO: ");
scanf ("%f", &populacao1);
printf ("AREA EM KM²: ");
scanf ("%f", &area1);
printf ("PIB: ");
scanf ("%f", &pib1);
printf ("PONTOS TURISTICOS:\n ");
scanf ("%d", &pontosturisticos1);
while ((c = getchar()) != '\n' && c != EOF); // LIMPA O BUFFER

// IMPRESSAO E LEITURA DA SEGUNDA CARTA:
printf ("NOME DA SEGUNDA CARTA: ");
fgets (carta2, 20, stdin);
carta2 [strcspn(carta2, "\n")] = '\0'; // REMOVE O '\N' DO FINAL
printf ("ESTADO: ");
fgets (estado2, 20, stdin);
estado2 [strcspn(estado2, "\n")] = '\0'; // REMOVE O '\N' DO FINAL
printf ("CIDADE: ");
fgets (cidade2, 20, stdin);
cidade2 [strcspn(cidade2, "\n")] = '\0'; // REMOVE O '\N' DO FINAL
printf ("POPULAÇAO: ");
scanf ("%f", &populacao2);
printf ("AREA EM KM²: ");
scanf ("%f", &area2);
printf ("PIB: ");
scanf ("%f", &pib2);
printf ("PONTOS TURISTICOS: \n");
scanf ("%d", &pontosturisticos2);

resultado1 = area1 / populacao1;
printf ("M² por pessoa da carta %s: %fM²\n", carta1, resultado1);

resultado2 = area2 / populacao2;
printf ("M² por pessoa da carta %s: %fM²\n", carta2, resultado2);

if (resultado1 > resultado2) {
    printf ("PARABENS! %s GANHOU!\n", carta1);
} else {
    printf ("PARABENS! %s GANHOU!\n", carta2);
}
printf("\nDeseja jogar novamente? (1 = Sim / 0 = Não): ");
scanf("%d", &continuar);
while ((c = getchar()) != '\n' && c != EOF); // limpa buffer
}
printf ("FIM DO JOGO\n");


return 0;

}