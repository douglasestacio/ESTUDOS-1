#include <stdio.h>
 
int main() { // Abre colchetes Int main
    int menu = 1, menu2 = 1;
   
while (menu) { // Abre colchetes do While


printf ("Digite 1 para ver a msg segreta ou 2 para Sair: ");
scanf ("%d", &menu);

switch (menu)
{   //Abre colchetes do switch
case 1:
printf("Olá Mundo!\n");
menu = 0;
break;

case 2:
printf ("Saindo....\n");
return 0;

default:
printf ("OPÇÃO INVALIDA!\n");
break;



} //Fecha colchetes do while
printf ("Deseja ver Novavente? ");
scanf ("%d", &menu2);



if (menu2) {
printf ("Ola Mundo Novamnte!\n");
} else {
printf ("Fim!\n");
}


} //Fecha colchetes do switch

return 0;
} // Fecha colchetes do int main