#include <stdio.h>
int main (){

int c; // LIMPA O BUFFER  --->  while ((c = getchar()) != '\n' && c != EOF);

// VARIANTES DAS CARTAS 1 E 2:
char carta1[20], carta2 [20];
char estado1[20], estado2 [20];
char cidade1[20], cidade2 [20];
float populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontosturisticos1, pontosturisticos2;
int resultado1 = 0, resultado2 = 0;
//APRESENTACAO DO PROGRAMA:
printf ("\n---SUPER TRUNFO---\n");

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
printf ("PONTOS TURISTICOS: ");
scanf ("%d", &pontosturisticos2);

if (populacao1 > populacao2) resultado1++;
else if (populacao2 > populacao1) resultado2++;
if // continuar......

if ( resultado1 > resultado2) {
    printf ("CARTA %s GANHOU!\n", carta1);
} else
printf ("CARTA %s GANHOU!\n", carta2);


return 0;

}