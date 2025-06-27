#include <stdio.h>
int main () {
int douglas = 40, lorenzo = 20;
int resultado = 0;

douglas > lorenzo ? (resultado = douglas) : (resultado = lorenzo);
printf ("Quem tem mais, tem: %d\n", resultado);

return 0;
}