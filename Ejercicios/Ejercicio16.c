#include <stdio.h>

void sumaSerie(); // Declaramos la funcion 

int main() {
    sumaSerie(); // Llamamos a la funcion
    return 0;
}

void calcularSumaSerie() {
    int n; // Declaro la variable

    printf("Calcular la suma de la serie 1 + 1/2 + 1/3 + ... + 1/n\n"); // Programa que se va a realizar
    printf("Ingrese un numero: "); // Pedimos que ingrese un numero al azar
    scanf("%d", &n); // Almacena el número ingresado 

    if (n > 0) {
        printf("Si n = %d, la suma = 1", n); // Imprime el inicio del mensaje

        int i = 2; // Contador

        // Bucle while para calcular la suma de la serie
        while (i <= n) {
            printf(" + 1/%d", i); // Imprime la serie
            i++; // Aumenta el valor del contador
        }
    }
}
