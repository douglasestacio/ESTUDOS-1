#include <stdio.h>

void ola () {
    printf ("Olá parceiro!\n");
}

int main() {
int i = 1, u = 1;

while (i <= 3) {
   ola ();
   i++;
}

while (u <= 3) {
   ola ();
   u++;
}

   

   
    return 0;
}