#include <stdio.h>

void calcularmcd(); // Declaramos la funcion

int main() {
    calcularmcd(); // Llamamos a la funcion
    return 0;
}

void calcularmcd() {
    int n1, n2;

    printf("Calcular el MCD de dos numeros\n"); // Programa que se va a realizar
    printf("Ingrese el primer numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n1); // Almacenamos el rpimero numero
    printf("Ingrese el segundo numero: "); // Pedimos que ingrese el segundo numero
    scanf("%d", &n2); // Almacenamos el segundo numero

    int mcd = 1; // Contador 
    int i = 1;
    while (i <= n1 && i <= n2) {
        if (n1 % i == 0 && n2 % i == 0) {
            mcd = i;
        }
        i++;
    }

    printf("El MCD entre %d y %d es: %d\n", n1, n2, mcd); // Imprimimos cual es el MCD de dos numeros 
}
