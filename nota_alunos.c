#include <stdio.h>
int main (){
    int opcao = 0;
    float nota1 = 0, nota2 = 0, media = 0;

    printf ("Menu de Gerenciamento de Estudantes\n");
    printf ("1. Calcular Média\n");
    printf ("2. Determinar Status\n");
    printf ("3. Sair\n");
    printf ("Escolha uma opção: \n");
    scanf ("%d", &opcao);

    switch (opcao) {
        case 1:
        printf ("Calcular a Média\n");
        printf ("Digite a Primeira Nota: \n");
        scanf ("%f", &nota1);
        printf ("Digite a Segunda Nota: \n");
        scanf ("%f", &nota2);
        // testar a condição se a nota é >= 0 e <= 10
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
            media = (nota1 + nota2) / 2;
            printf ("Á Média é %.2f\n", media);
        } else {
            printf ("Entrada Incorreta\n");
        }
        break;

        case 2:
        printf ("Determinar Status\n");
        printf ("Entrar com a Média: ");
        scanf ("%f", &media);
        media >= 5 ? printf ("Aprovado\n") : printf ("Reprovado\n");
        break;

        case 3:
        printf ("Saindo do Programa....\n");
        break;

        default:
        printf ("Opção Invalida!\n");
        break;

    }



return 0;

}