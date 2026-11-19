#include <stdio.h>

void sumarUno(int *contador) {
    int valor = 2;
    (*contador)++;
}

int main() {
    int contador = 0;
    sumarUno(&contador);
    sumarUno(&contador);
    printf("%i\n", contador);
    return 0;
}
