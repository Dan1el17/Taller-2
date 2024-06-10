#include <stdio.h>

void productoSerieReciprocos(); // Declaramos la funcion

int main() {
    productoSerieReciprocos(); // Llamamos la funcion
    return 0;
}

void productoSerieReciprocos() {
    int n; // Declaro la variable 

    printf("Calcular el producto de la serie 1 * 1/2 * 1/3 * ... * 1/n\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacena el número ingresado 

    if (n > 0) {
        printf("Si n = %d, el producto = 1", n); // Imprime el inicio del mensaje

        int i = 2; // Contador

        // Bucle while para calcular el producto de la serie
        while (i <= n) {
            printf(" * 1/%d", i); // Imprime la serie
            i++; // Incrementa el contador
        }
    }
}
