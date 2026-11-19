#include <stdio.h>

void mostrarDoble(int num) {
    int doob = num * 2;
        printf("Doble es: %i\n", doob);
}
void evaluarNumero(int n) {
    if (n > 0){ 
        printf("%i es positivo", n);
    }
    else if (n < 0 ) {
        printf("%i es negativo", n);
    }
    else {
        printf("%i es 0", n);
    }

}


int main() {
    int valor1 = 5555;
    int valor2 = -3333;
    int valor3 = 0;

    printf("\n");
    evaluarNumero(valor1);
    printf("\n"); 
    mostrarDoble(valor1);

    printf("\n"); 
    evaluarNumero(valor2);
    printf("\n");
    mostrarDoble(valor2);

    printf("\n");
    evaluarNumero(valor3);
    printf("\n"); 
    mostrarDoble(valor3);



    
    return 0;
}
