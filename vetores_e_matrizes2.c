#include <stdio.h>
int main () {

    char * aluno [2][3] = {
        {"Lorenzo", "matematica 10", "portugues 10"},
        {"Douglas", "matematica 5", "portugues 5"}
    };

    int index = 0;
    
    printf ("Escolha 0 ou 1 para ver a nota: ");
    scanf ("%d", &index);

    printf ("Voce digitou: %d = %s, %s, %s\n", index, aluno[index][0], aluno[index][1], aluno[index][2]);


    return 0;
}