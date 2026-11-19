#include <stdio.h>

int sumarUno(int c) {
    int valor = 2;
    return c + 1;
}

int main() {
    int contador = 0;
    contador = sumarUno(contador);
    contador = sumarUno(contador);
    printf("%i\n", contador);
    return 0;
}
