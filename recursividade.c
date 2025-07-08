#include <stdio.h>

void recursiva (int numero) {
    if (numero > 0) {
        printf ("%d \n", numero);

        recursiva (numero - 1);
    }
}

int main() {
    int quantidade = 10;
    printf ("QUANTIDADE REGRESSIVA....");
    recursiva(quantidade);


    return 0;
}