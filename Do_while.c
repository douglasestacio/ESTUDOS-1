#include <stdio.h>
 
int main() {
    int i = 2, a = 1, resultado = 0, retorno = 0;


    while (i <= 10 && a <= 10){
        resultado = i * a;
            printf("%d x %d = %d\n", i, a, resultado);
            a++;
            
    } if (resultado >= 20 ) {
        printf ("A conta terminou\n");
    }  



    return 0;
}